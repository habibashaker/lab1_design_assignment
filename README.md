# ROS 2 Lab 1 — Turtlesim Actions and Services

## Project Overview
This project implements a ROS 2 system for controlling the Turtlesim simulator using custom interfaces, action servers, services, and configurable speed parameters.

## Team Members
- Habiba Ahmed Shaker: 9266
- Alaa Hossam Eldin: 9338
- Abdelrahman ahmed : 9410

## Packages
- `my_interfaces`:

Target.msg: Contains the target x, y, and yaw.

GoToPose.action: Defines the movement goal, result, and feedback.

Square.action: Defines the square side length, result, and completed-side feedback.

Speed.srv: Requests new maximum linear and angular speed limits.

- `turtle_control`:

Contains the Python ROS 2 nodes:

go_to_pose_server: Moves the turtle toward a target pose.

reset_server: Clears the screen and returns the turtle to its initial pose

square_server: Draws a square by sending four movement goals.


## Build Instructions

```bash
source /opt/ros/jazzy/setup.bash
mkdir -p ros2_ws/src
cd ross2_ws/
cd ros2_ws/src
git clone https://github.com/habibashaker/lab1_design_assignment.git
cd ~/ros2_ws
colcon build
source install/setup.bash
```

## Run Instructions

```bash
ros2 launch turtle_control turtle_system.launch.py
```
