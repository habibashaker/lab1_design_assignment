
import asyncio

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup

from std_srvs.srv import Empty, Trigger
from turtlesim.srv import TeleportAbsolute, SetPen


class ResetServer(Node):

    def __init__(self):
        super().__init__('reset_server')

        self.client_group = ReentrantCallbackGroup()
        self.service_group = ReentrantCallbackGroup()

        self.clear_client = self.create_client(
            Empty, '/clear',
            callback_group=self.client_group
        )

        self.teleport_client = self.create_client(
            TeleportAbsolute, '/turtle1/teleport_absolute',
            callback_group=self.client_group
        )

        self.pen_client = self.create_client(
            SetPen, '/turtle1/set_pen',
            callback_group=self.client_group
        )

        self.reset_service = self.create_service(
            Trigger,
            '/reset_turtle',
            self.reset_callback,
            callback_group=self.service_group
        )

        self.get_logger().info('Reset server is ready')

    async def call_service(self, client, request):
        if not client.wait_for_service(timeout_sec=3.0):
            raise RuntimeError(
                f'Service {client.srv_name} is unavailable'
            )

        result = await client.call_async(request)

        if result is None:
            raise RuntimeError(
                f'Service {client.srv_name} returned no response'
            )

        return result

    async def reset_callback(self, request, response):
        self.get_logger().info('Reset requested')

        try:
            # Clear the drawing
            await self.call_service(
                self.clear_client, Empty.Request()
            )

            # Disable the pen
            pen = SetPen.Request()
            pen.r = 0
            pen.g = 0
            pen.b = 0
            pen.width = 1
            pen.off = 1

            await self.call_service(self.pen_client, pen)

            # Teleport to the center, facing right
            teleport = TeleportAbsolute.Request()
            teleport.x = 5.544445
            teleport.y = 5.544445
            teleport.theta = 0.0

            await self.call_service(
                self.teleport_client, teleport
            )

            # Restore the pen
            pen.r = 255
            pen.g = 255
            pen.b = 255
            pen.width = 3
            pen.off = 0

            await self.call_service(self.pen_client, pen)

            response.success = True
            response.message = 'Turtle reset successfully'

            self.get_logger().info(response.message)

        except Exception as error:
            response.success = False
            response.message = str(error)
            self.get_logger().error(response.message)

        return response


def main(args=None):
    rclpy.init(args=args)
    node = ResetServer()

    executor = MultiThreadedExecutor(num_threads=3)
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()