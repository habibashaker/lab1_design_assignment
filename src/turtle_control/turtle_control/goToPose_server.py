import math
import time

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.action import ActionServer, GoalResponse, CancelResponse

from my_interfaces.action import GoToPose
from my_interfaces.srv import Speed
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose


class GoToPoseServer(Node):
    def __init__(self):
        super().__init__('go_to_pose_server')

        self.declare_parameter('max_linear_speed', 2.0)
        self.declare_parameter('max_angular_speed', 2.0)

        # Controller settings.
        self.position_tolerance = 0.1
        self.angle_tolerance = 0.05
        self.linear_gain = 2.0
        self.angular_gain = 4.0
        self.loop_period = 0.05  # seconds (20 Hz)

        self.current_pose = None
        self.pose_received = False

        # Reentrant group + MultiThreadedExecutor lets the pose subscription
        # keep running while execute_callback is busy in its loop.
        self.cb_group = ReentrantCallbackGroup()

        self.turtle_pose = self.create_subscription(
            Pose, 'turtle1/pose', self.pose_callback, 10,
            callback_group=self.cb_group
        )
        self.turtle_twist = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.speed_srv = self.create_service(
            Speed, 'set_speed', self.set_speed_callback,
            callback_group=self.cb_group
        )

        self.action_server = ActionServer(
            self,
            GoToPose,
            'go_to_pose',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=self.cb_group
        )

        self.get_logger().info('GoToPose Action Server is ready.')

    def set_speed_callback(self, request, response):
        linear = request.max_linear_speed
        angular = request.max_angular_speed

        # Validate both values before changing either parameter.
        if linear <= 0.0 or angular <= 0.0:
            response.done = False
            response.message = 'Both speed limits must be greater than zero.'
            self.get_logger().warn(response.message)
            return response

        results = self.set_parameters([
            Parameter('max_linear_speed', Parameter.Type.DOUBLE, float(linear)),
            Parameter('max_angular_speed', Parameter.Type.DOUBLE, float(angular)),
        ])
        if all(result.successful for result in results):
            response.done = True
            response.message = 'Done! Speed limits updated successfully.'
            self.get_logger().info(response.message)
        else:
            response.done = False
            response.message = 'Failed to set one or both speed limits.'
            self.get_logger().error(response.message)
        return response

    def pose_callback(self, msg):
        self.current_pose = msg
        self.pose_received = True

    def goal_callback(self, goal_request):
        target = goal_request.target_point
        self.get_logger().info(
            'Received goal request: x=%f, y=%f, yaw=%f'
            % (target.x, target.y, target.yaw)
        )
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request.')
        return CancelResponse.ACCEPT

    @staticmethod
    def normalize_angle(angle):
        return math.atan2(math.sin(angle), math.cos(angle))

    @staticmethod
    def clamp(value, limit):
        return max(-limit, min(value, limit))

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        target = goal_handle.request.target_point
        target_x = target.x
        target_y = target.y
        target_yaw = target.yaw

        feedback_msg = GoToPose.Feedback()
        result_msg = GoToPose.Result()

        try:
            while rclpy.ok():

                # 1. Check cancellation.
                if goal_handle.is_cancel_requested:
                    self.turtle_twist.publish(Twist())
                    goal_handle.canceled()
                    result_msg.done = False
                    #result_msg.message = 'Goal canceled.'
                    return result_msg

                # 2. Wait for a valid pose (sleep so we don't burn CPU).
                if not self.pose_received:
                    time.sleep(self.loop_period)
                    continue

                # Take a snapshot so the pose can't change mid-calculation.
                pose = self.current_pose

                # 3. Distance to target position.
                error_x = target_x - pose.x
                error_y = target_y - pose.y
                distance = math.hypot(error_x, error_y)

                feedback_msg.remaining_distance = distance
                goal_handle.publish_feedback(feedback_msg)

                # Read current speed limits.
                max_lin = self.get_parameter('max_linear_speed').value
                max_ang = self.get_parameter('max_angular_speed').value

                twist = Twist()

                # PHASE 1: Move toward the target position.
                if distance > self.position_tolerance:
                    angle_to_target = math.atan2(error_y, error_x)
                    angle_error = self.normalize_angle(angle_to_target - pose.theta)

                    # Rotate toward the target.
                    twist.angular.z = self.clamp(self.angular_gain * angle_error, max_ang)

                    # Move forward only when roughly facing the target.
                    if abs(angle_error) < 0.3:
                        twist.linear.x = min(self.linear_gain * distance, max_lin)
                    else:
                        twist.linear.x = 0.0

                # PHASE 2: Position reached. Match the requested final yaw.
                else:
                    yaw_error = self.normalize_angle(target_yaw - pose.theta)

                    if abs(yaw_error) <= self.angle_tolerance:
                        self.turtle_twist.publish(Twist())
                        goal_handle.succeed()
                        result_msg.done = True
                        #result_msg.message = 'Target pose reached.'
                        #self.get_logger().info(result_msg.message)
                        return result_msg

                    twist.angular.z = self.clamp(self.angular_gain * yaw_error, max_ang)
                    twist.linear.x = 0.0

                # 4. Publish command, then sleep so other threads can update the pose.
                self.turtle_twist.publish(twist)
                time.sleep(self.loop_period)

            # rclpy shut down before we finished.
            result_msg.done = False
            #result_msg.message = 'ROS stopped before reaching the target.'
            goal_handle.abort()
            return result_msg

        finally:
            # Always stop when this goal ends.
            self.turtle_twist.publish(Twist())


def main():
    rclpy.init()
    node = GoToPoseServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()