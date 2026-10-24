# import rclpy
# from rclpy.node import Node
# from my_interfaces.srv import Speed 

# class SpeedParam(Node):
#     def __init__(self):
#         super().__init__('speed_param_node')

#         self.declare_parameter('max_linear_speed', 2.0)
#         self.declare_parameter('max_angular_speed', 2.0)

#         self.speed_srv = self.create_service(Speed, 'set_speed', self.set_speed_callback)
#         self.get_logger().info('Speed Server ready')


#     def set_speed_callback(self, request, response):
#         linear = request.max_linear_speed
#         angular = request.max_angular_speed

#         # Validate both values before changing either parameter.
#         if linear <= 0.0 or angular <= 0.0:
#             response.done = False
#             response.message = (
#                 'Both speed limits must be greater than zero.'
#         )
#             self.get_logger().warn(response.message)
#             return response
#         results = self.set_parameters([
#             rclpy.parameter.Parameter('max_linear_speed', rclpy.Parameter.Type.DOUBLE, linear),
#             rclpy.parameter.Parameter('max_angular_speed', rclpy.Parameter.Type.DOUBLE, angular)
#         ])
#         if all(result.successful for result in results):
#             response.done = True
#             response.message = (
#                 'Done! Speed limits updated successfully.'
#             )
#             self.get_logger().info(response.message)
#         else:
#             response.done = False
#             response.message = (
#                 'Failed to set one or both speed limits.'
#             )
#             self.get_logger().error(response.message)
#         return response
    
    

# def main():
#     rclpy.init()
#     node = SpeedParam()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()


# if __name__ == '__main__':
#     main()