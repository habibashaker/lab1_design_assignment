// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:action/Square.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/action/square.hpp"


#ifndef MY_INTERFACES__ACTION__DETAIL__SQUARE__BUILDER_HPP_
#define MY_INTERFACES__ACTION__DETAIL__SQUARE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/action/detail/square__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_Goal_side_length
{
public:
  Init_Square_Goal_side_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::Square_Goal side_length(::my_interfaces::action::Square_Goal::_side_length_type arg)
  {
    msg_.side_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_Goal>()
{
  return my_interfaces::action::builder::Init_Square_Goal_side_length();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_Result_done
{
public:
  Init_Square_Result_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::Square_Result done(::my_interfaces::action::Square_Result::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_Result>()
{
  return my_interfaces::action::builder::Init_Square_Result_done();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_Feedback_sides_done
{
public:
  Init_Square_Feedback_sides_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::Square_Feedback sides_done(::my_interfaces::action::Square_Feedback::_sides_done_type arg)
  {
    msg_.sides_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_Feedback>()
{
  return my_interfaces::action::builder::Init_Square_Feedback_sides_done();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_SendGoal_Request_goal
{
public:
  explicit Init_Square_SendGoal_Request_goal(::my_interfaces::action::Square_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_SendGoal_Request goal(::my_interfaces::action::Square_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Request msg_;
};

class Init_Square_SendGoal_Request_goal_id
{
public:
  Init_Square_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_SendGoal_Request_goal goal_id(::my_interfaces::action::Square_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Square_SendGoal_Request_goal(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_SendGoal_Request>()
{
  return my_interfaces::action::builder::Init_Square_SendGoal_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_SendGoal_Response_stamp
{
public:
  explicit Init_Square_SendGoal_Response_stamp(::my_interfaces::action::Square_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_SendGoal_Response stamp(::my_interfaces::action::Square_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Response msg_;
};

class Init_Square_SendGoal_Response_accepted
{
public:
  Init_Square_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_SendGoal_Response_stamp accepted(::my_interfaces::action::Square_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Square_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_SendGoal_Response>()
{
  return my_interfaces::action::builder::Init_Square_SendGoal_Response_accepted();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_SendGoal_Event_response
{
public:
  explicit Init_Square_SendGoal_Event_response(::my_interfaces::action::Square_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_SendGoal_Event response(::my_interfaces::action::Square_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Event msg_;
};

class Init_Square_SendGoal_Event_request
{
public:
  explicit Init_Square_SendGoal_Event_request(::my_interfaces::action::Square_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Square_SendGoal_Event_response request(::my_interfaces::action::Square_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Square_SendGoal_Event_response(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Event msg_;
};

class Init_Square_SendGoal_Event_info
{
public:
  Init_Square_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_SendGoal_Event_request info(::my_interfaces::action::Square_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Square_SendGoal_Event_request(msg_);
  }

private:
  ::my_interfaces::action::Square_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_SendGoal_Event>()
{
  return my_interfaces::action::builder::Init_Square_SendGoal_Event_info();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_GetResult_Request_goal_id
{
public:
  Init_Square_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::Square_GetResult_Request goal_id(::my_interfaces::action::Square_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_GetResult_Request>()
{
  return my_interfaces::action::builder::Init_Square_GetResult_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_GetResult_Response_result
{
public:
  explicit Init_Square_GetResult_Response_result(::my_interfaces::action::Square_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_GetResult_Response result(::my_interfaces::action::Square_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Response msg_;
};

class Init_Square_GetResult_Response_status
{
public:
  Init_Square_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_GetResult_Response_result status(::my_interfaces::action::Square_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Square_GetResult_Response_result(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_GetResult_Response>()
{
  return my_interfaces::action::builder::Init_Square_GetResult_Response_status();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_GetResult_Event_response
{
public:
  explicit Init_Square_GetResult_Event_response(::my_interfaces::action::Square_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_GetResult_Event response(::my_interfaces::action::Square_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Event msg_;
};

class Init_Square_GetResult_Event_request
{
public:
  explicit Init_Square_GetResult_Event_request(::my_interfaces::action::Square_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Square_GetResult_Event_response request(::my_interfaces::action::Square_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Square_GetResult_Event_response(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Event msg_;
};

class Init_Square_GetResult_Event_info
{
public:
  Init_Square_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_GetResult_Event_request info(::my_interfaces::action::Square_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Square_GetResult_Event_request(msg_);
  }

private:
  ::my_interfaces::action::Square_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_GetResult_Event>()
{
  return my_interfaces::action::builder::Init_Square_GetResult_Event_info();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_Square_FeedbackMessage_feedback
{
public:
  explicit Init_Square_FeedbackMessage_feedback(::my_interfaces::action::Square_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::Square_FeedbackMessage feedback(::my_interfaces::action::Square_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::Square_FeedbackMessage msg_;
};

class Init_Square_FeedbackMessage_goal_id
{
public:
  Init_Square_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Square_FeedbackMessage_feedback goal_id(::my_interfaces::action::Square_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Square_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_interfaces::action::Square_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::Square_FeedbackMessage>()
{
  return my_interfaces::action::builder::Init_Square_FeedbackMessage_goal_id();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__SQUARE__BUILDER_HPP_
