# ROS 2 Lab 1 — Turtlesim Actions and Services

## Project Overview
This project implements a ROS 2 system for controlling the Turtlesim simulator using custom interfaces, action servers, services, and configurable speed parameters.

## Team Members
- Habiba Ahmed Shaker: 9266
- Alaa Hossam Eldin: 9338
- Abdelrahman ahmed : 9410

## Packages
- `my_interfaces`: Custom message, action, and service definitions.
- `turtle_control`: Movement action server, reset service, speed service, and square action server.

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
