// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/Speed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/speed.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__SPEED__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speed_Request_max_angular_speed
{
public:
  explicit Init_Speed_Request_max_angular_speed(::my_interfaces::srv::Speed_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::Speed_Request max_angular_speed(::my_interfaces::srv::Speed_Request::_max_angular_speed_type arg)
  {
    msg_.max_angular_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Request msg_;
};

class Init_Speed_Request_max_linear_speed
{
public:
  Init_Speed_Request_max_linear_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speed_Request_max_angular_speed max_linear_speed(::my_interfaces::srv::Speed_Request::_max_linear_speed_type arg)
  {
    msg_.max_linear_speed = std::move(arg);
    return Init_Speed_Request_max_angular_speed(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::Speed_Request>()
{
  return my_interfaces::srv::builder::Init_Speed_Request_max_linear_speed();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speed_Response_message
{
public:
  explicit Init_Speed_Response_message(::my_interfaces::srv::Speed_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::Speed_Response message(::my_interfaces::srv::Speed_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Response msg_;
};

class Init_Speed_Response_done
{
public:
  Init_Speed_Response_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speed_Response_message done(::my_interfaces::srv::Speed_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return Init_Speed_Response_message(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::Speed_Response>()
{
  return my_interfaces::srv::builder::Init_Speed_Response_done();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speed_Event_response
{
public:
  explicit Init_Speed_Event_response(::my_interfaces::srv::Speed_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::Speed_Event response(::my_interfaces::srv::Speed_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Event msg_;
};

class Init_Speed_Event_request
{
public:
  explicit Init_Speed_Event_request(::my_interfaces::srv::Speed_Event & msg)
  : msg_(msg)
  {}
  Init_Speed_Event_response request(::my_interfaces::srv::Speed_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Speed_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Event msg_;
};

class Init_Speed_Event_info
{
public:
  Init_Speed_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speed_Event_request info(::my_interfaces::srv::Speed_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Speed_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::Speed_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::Speed_Event>()
{
  return my_interfaces::srv::builder::Init_Speed_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SPEED__BUILDER_HPP_
