// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/Speed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/speed.h"


#ifndef MY_INTERFACES__SRV__DETAIL__SPEED__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Speed in the package my_interfaces.
typedef struct my_interfaces__srv__Speed_Request
{
  float max_linear_speed;
  float max_angular_speed;
} my_interfaces__srv__Speed_Request;

// Struct for a sequence of my_interfaces__srv__Speed_Request.
typedef struct my_interfaces__srv__Speed_Request__Sequence
{
  my_interfaces__srv__Speed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__Speed_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Speed in the package my_interfaces.
typedef struct my_interfaces__srv__Speed_Response
{
  bool done;
  rosidl_runtime_c__String message;
} my_interfaces__srv__Speed_Response;

// Struct for a sequence of my_interfaces__srv__Speed_Response.
typedef struct my_interfaces__srv__Speed_Response__Sequence
{
  my_interfaces__srv__Speed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__Speed_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__srv__Speed_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__srv__Speed_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Speed in the package my_interfaces.
typedef struct my_interfaces__srv__Speed_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__srv__Speed_Request__Sequence request;
  my_interfaces__srv__Speed_Response__Sequence response;
} my_interfaces__srv__Speed_Event;

// Struct for a sequence of my_interfaces__srv__Speed_Event.
typedef struct my_interfaces__srv__Speed_Event__Sequence
{
  my_interfaces__srv__Speed_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__Speed_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__SPEED__STRUCT_H_
