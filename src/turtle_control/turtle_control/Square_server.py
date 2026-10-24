
import math

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient, GoalResponse

from my_interfaces.action import Square, GoToPose
from my_interfaces.msg import Target
from std_srvs.srv import Trigger


class SquareServer(Node):

    def __init__(self):
        super().__init__('square_server')

        # Client for the GoToPose action server
        self.go_to_pose_client = ActionClient(
            self,
            GoToPose,
            '/go_to_pose'
        )

        # Client for the reset service
        self.reset_client = self.create_client(
            Trigger,
            '/reset_turtle'
        )

        # Square action server
        self.square_server = ActionServer(
            self,
            Square,
            '/draw_square',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback
        )

        self.get_logger().info(
            'Square action server is ready'
        )

    def goal_callback(self, goal_request):
        side = float(goal_request.side_length)

        # Accept only valid side lengths
        if not math.isfinite(side) or side <= 0.0 or side > 5.0:
            self.get_logger().warning(
                'Rejected goal: side_length must be greater than 0 '
                'and no more than 5'
            )
            return GoalResponse.REJECT

        return GoalResponse.ACCEPT

    async def reset_turtle(self):
        if not self.reset_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error(
                'Reset service /reset_turtle is unavailable'
            )
            return False

        request = Trigger.Request()
        response = await self.reset_client.call_async(request)

        if response is None or not response.success:
            message = (
                response.message
                if response is not None
                else 'No response received'
            )
            self.get_logger().error(
                f'Reset service failed: {message}'
            )
            return False

        self.get_logger().info('Turtle reset successfully')
        return True

    async def execute_callback(self, goal_handle):
        result = Square.Result()
        result.done = False

        side = float(goal_handle.request.side_length)

        self.get_logger().info(
            f'Starting square with side length {side}'
        )

        # Step 1: Reset the turtle
        if not await self.reset_turtle():
            goal_handle.abort()
            return result

        # Step 2: Define the four corners
        center_x = 5.544445
        center_y = 5.544445

        corners = [
            (center_x + side, center_y, 0.0),
            (center_x + side, center_y + side, math.pi / 2.0),
            (center_x, center_y + side, math.pi),
            (center_x, center_y, -math.pi / 2.0),
        ]

        # Step 3: Move to each corner sequentially
        for index, (x, y, yaw) in enumerate(corners, start=1):

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().warning(
                    'Square drawing was canceled'
                )
                return result

            self.get_logger().info(
                f'Moving to corner {index}/4: '
                f'x={x:.2f}, y={y:.2f}, yaw={yaw:.2f}'
            )

            # Wait for GoToPose server
            if not self.go_to_pose_client.wait_for_server(
                timeout_sec=5.0
            ):
                self.get_logger().error(
                    'GoToPose action server is unavailable'
                )
                goal_handle.abort()
                return result

            # Create movement goal
            goal = GoToPose.Goal()
            goal.target_point = Target()
            goal.target_point.x = x
            goal.target_point.y = y
            goal.target_point.yaw = yaw

            # Send movement goal
            movement_handle = await (
                self.go_to_pose_client.send_goal_async(goal)
            )

            if not movement_handle.accepted:
                self.get_logger().error(
                    f'Movement goal {index} was rejected'
                )
                goal_handle.abort()
                return result

            # Wait until movement finishes
            movement_result = await (
                movement_handle.get_result_async()
            )

            # Check whether movement succeeded
            if movement_result.status != 4:
                self.get_logger().error(
                    f'Movement goal {index} did not succeed'
                )
                goal_handle.abort()
                return result

            if not movement_result.result.done:
                self.get_logger().error(
                    f'Movement server reported failure on goal {index}'
                )
                goal_handle.abort()
                return result

            # Publish feedback after each completed side
            feedback = Square.Feedback()
            feedback.sides_done = index
            goal_handle.publish_feedback(feedback)

            self.get_logger().info(
                f'Side {index}/4 completed'
            )

        # Step 4: Report successful completion
        result.done = True
        goal_handle.succeed()

        self.get_logger().info(
            'Square drawing completed successfully'
        )

        return result


def main(args=None):
    rclpy.init(args=args)
    node = SquareServer()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()