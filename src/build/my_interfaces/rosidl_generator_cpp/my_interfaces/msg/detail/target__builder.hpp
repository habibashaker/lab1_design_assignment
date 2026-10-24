// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/target.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Target_yaw
{
public:
  explicit Init_Target_yaw(::my_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Target yaw(::my_interfaces::msg::Target::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Target msg_;
};

class Init_Target_y
{
public:
  explicit Init_Target_y(::my_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_yaw y(::my_interfaces::msg::Target::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Target_yaw(msg_);
  }

private:
  ::my_interfaces::msg::Target msg_;
};

class Init_Target_x
{
public:
  Init_Target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_y x(::my_interfaces::msg::Target::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Target_y(msg_);
  }

private:
  ::my_interfaces::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Target>()
{
  return my_interfaces::msg::builder::Init_Target_x();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
