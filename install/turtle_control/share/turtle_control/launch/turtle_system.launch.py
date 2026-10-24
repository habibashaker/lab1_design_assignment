import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pkg_path = get_package_share_directory('turtle_control')

    params_file = os.path.join(pkg_path, 'config', 'cfg.yaml')
     #= os.path.join(pkg_path, 'config', 'cfg.json')

    return LaunchDescription([
         Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtlesim',
            output='screen'
        ),

         Node(
            package='turtle_control',
            executable='turtle_control',
            name='turtle_control',
            parameters=[params_file],
            output='screen'
        ),

        Node(
            package='turtle_control',
            executable='reset_server',
            name='reset_server',
            output='screen'
        ),


        Node(
            package='turtle_control',
            executable='square_server',
            name='square_server',
            output='screen'
        ),

    ])