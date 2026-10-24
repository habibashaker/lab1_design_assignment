// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_interfaces:action/GoToPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_interfaces/action/detail/go_to_pose__struct.h"
#include "my_interfaces/action/detail/go_to_pose__type_support.h"
#include "my_interfaces/action/detail/go_to_pose__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_Goal_type_support_ids_t;

static const _GoToPose_Goal_type_support_ids_t _GoToPose_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_Goal_type_support_symbol_names_t _GoToPose_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_Goal)),
  }
};

typedef struct _GoToPose_Goal_type_support_data_t
{
  void * data[2];
} _GoToPose_Goal_type_support_data_t;

static _GoToPose_Goal_type_support_data_t _GoToPose_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_Goal_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_Goal__get_type_hash,
  &my_interfaces__action__GoToPose_Goal__get_type_description,
  &my_interfaces__action__GoToPose_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_Goal)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_Result_type_support_ids_t;

static const _GoToPose_Result_type_support_ids_t _GoToPose_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_Result_type_support_symbol_names_t _GoToPose_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_Result)),
  }
};

typedef struct _GoToPose_Result_type_support_data_t
{
  void * data[2];
} _GoToPose_Result_type_support_data_t;

static _GoToPose_Result_type_support_data_t _GoToPose_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_Result_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_Result__get_type_hash,
  &my_interfaces__action__GoToPose_Result__get_type_description,
  &my_interfaces__action__GoToPose_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_Result)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_Feedback_type_support_ids_t;

static const _GoToPose_Feedback_type_support_ids_t _GoToPose_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_Feedback_type_support_symbol_names_t _GoToPose_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_Feedback)),
  }
};

typedef struct _GoToPose_Feedback_type_support_data_t
{
  void * data[2];
} _GoToPose_Feedback_type_support_data_t;

static _GoToPose_Feedback_type_support_data_t _GoToPose_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_Feedback_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_Feedback__get_type_hash,
  &my_interfaces__action__GoToPose_Feedback__get_type_description,
  &my_interfaces__action__GoToPose_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_Feedback)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_SendGoal_Request_type_support_ids_t;

static const _GoToPose_SendGoal_Request_type_support_ids_t _GoToPose_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_SendGoal_Request_type_support_symbol_names_t _GoToPose_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_SendGoal_Request)),
  }
};

typedef struct _GoToPose_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GoToPose_SendGoal_Request_type_support_data_t;

static _GoToPose_SendGoal_Request_type_support_data_t _GoToPose_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_SendGoal_Request_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_SendGoal_Request__get_type_hash,
  &my_interfaces__action__GoToPose_SendGoal_Request__get_type_description,
  &my_interfaces__action__GoToPose_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_SendGoal_Request)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_SendGoal_Response_type_support_ids_t;

static const _GoToPose_SendGoal_Response_type_support_ids_t _GoToPose_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_SendGoal_Response_type_support_symbol_names_t _GoToPose_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_SendGoal_Response)),
  }
};

typedef struct _GoToPose_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GoToPose_SendGoal_Response_type_support_data_t;

static _GoToPose_SendGoal_Response_type_support_data_t _GoToPose_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_SendGoal_Response_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_SendGoal_Response__get_type_hash,
  &my_interfaces__action__GoToPose_SendGoal_Response__get_type_description,
  &my_interfaces__action__GoToPose_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_SendGoal_Response)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_SendGoal_Event_type_support_ids_t;

static const _GoToPose_SendGoal_Event_type_support_ids_t _GoToPose_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_SendGoal_Event_type_support_symbol_names_t _GoToPose_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_SendGoal_Event)),
  }
};

typedef struct _GoToPose_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _GoToPose_SendGoal_Event_type_support_data_t;

static _GoToPose_SendGoal_Event_type_support_data_t _GoToPose_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_SendGoal_Event_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_SendGoal_Event__get_type_hash,
  &my_interfaces__action__GoToPose_SendGoal_Event__get_type_description,
  &my_interfaces__action__GoToPose_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_SendGoal_Event)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _GoToPose_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_SendGoal_type_support_ids_t;

static const _GoToPose_SendGoal_type_support_ids_t _GoToPose_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_SendGoal_type_support_symbol_names_t _GoToPose_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_SendGoal)),
  }
};

typedef struct _GoToPose_SendGoal_type_support_data_t
{
  void * data[2];
} _GoToPose_SendGoal_type_support_data_t;

static _GoToPose_SendGoal_type_support_data_t _GoToPose_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_SendGoal_service_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPose_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GoToPose_SendGoal_Request_message_type_support_handle,
  &GoToPose_SendGoal_Response_message_type_support_handle,
  &GoToPose_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_interfaces,
    action,
    GoToPose_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_interfaces,
    action,
    GoToPose_SendGoal
  ),
  &my_interfaces__action__GoToPose_SendGoal__get_type_hash,
  &my_interfaces__action__GoToPose_SendGoal__get_type_description,
  &my_interfaces__action__GoToPose_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_SendGoal)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_GetResult_Request_type_support_ids_t;

static const _GoToPose_GetResult_Request_type_support_ids_t _GoToPose_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_GetResult_Request_type_support_symbol_names_t _GoToPose_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_GetResult_Request)),
  }
};

typedef struct _GoToPose_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GoToPose_GetResult_Request_type_support_data_t;

static _GoToPose_GetResult_Request_type_support_data_t _GoToPose_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_GetResult_Request_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_GetResult_Request__get_type_hash,
  &my_interfaces__action__GoToPose_GetResult_Request__get_type_description,
  &my_interfaces__action__GoToPose_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_GetResult_Request)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_GetResult_Response_type_support_ids_t;

static const _GoToPose_GetResult_Response_type_support_ids_t _GoToPose_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_GetResult_Response_type_support_symbol_names_t _GoToPose_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_GetResult_Response)),
  }
};

typedef struct _GoToPose_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GoToPose_GetResult_Response_type_support_data_t;

static _GoToPose_GetResult_Response_type_support_data_t _GoToPose_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_GetResult_Response_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_GetResult_Response__get_type_hash,
  &my_interfaces__action__GoToPose_GetResult_Response__get_type_description,
  &my_interfaces__action__GoToPose_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_GetResult_Response)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_GetResult_Event_type_support_ids_t;

static const _GoToPose_GetResult_Event_type_support_ids_t _GoToPose_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_GetResult_Event_type_support_symbol_names_t _GoToPose_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_GetResult_Event)),
  }
};

typedef struct _GoToPose_GetResult_Event_type_support_data_t
{
  void * data[2];
} _GoToPose_GetResult_Event_type_support_data_t;

static _GoToPose_GetResult_Event_type_support_data_t _GoToPose_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_GetResult_Event_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_GetResult_Event__get_type_hash,
  &my_interfaces__action__GoToPose_GetResult_Event__get_type_description,
  &my_interfaces__action__GoToPose_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_GetResult_Event)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _GoToPose_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_GetResult_type_support_ids_t;

static const _GoToPose_GetResult_type_support_ids_t _GoToPose_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_GetResult_type_support_symbol_names_t _GoToPose_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_GetResult)),
  }
};

typedef struct _GoToPose_GetResult_type_support_data_t
{
  void * data[2];
} _GoToPose_GetResult_type_support_data_t;

static _GoToPose_GetResult_type_support_data_t _GoToPose_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_GetResult_service_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPose_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GoToPose_GetResult_Request_message_type_support_handle,
  &GoToPose_GetResult_Response_message_type_support_handle,
  &GoToPose_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_interfaces,
    action,
    GoToPose_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_interfaces,
    action,
    GoToPose_GetResult
  ),
  &my_interfaces__action__GoToPose_GetResult__get_type_hash,
  &my_interfaces__action__GoToPose_GetResult__get_type_description,
  &my_interfaces__action__GoToPose_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_GetResult)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__struct.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPose_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPose_FeedbackMessage_type_support_ids_t;

static const _GoToPose_FeedbackMessage_type_support_ids_t _GoToPose_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPose_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPose_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPose_FeedbackMessage_type_support_symbol_names_t _GoToPose_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, action, GoToPose_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, action, GoToPose_FeedbackMessage)),
  }
};

typedef struct _GoToPose_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GoToPose_FeedbackMessage_type_support_data_t;

static _GoToPose_FeedbackMessage_type_support_data_t _GoToPose_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPose_FeedbackMessage_message_typesupport_map = {
  2,
  "my_interfaces",
  &_GoToPose_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPose_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPose_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPose_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPose_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_interfaces__action__GoToPose_FeedbackMessage__get_type_hash,
  &my_interfaces__action__GoToPose_FeedbackMessage__get_type_description,
  &my_interfaces__action__GoToPose_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_interfaces, action, GoToPose_FeedbackMessage)() {
  return &::my_interfaces::action::rosidl_typesupport_c::GoToPose_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "my_interfaces/action/go_to_pose.h"
// already included above
// #include "my_interfaces/action/detail/go_to_pose__type_support.h"

static rosidl_action_type_support_t _my_interfaces__action__GoToPose__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &my_interfaces__action__GoToPose__get_type_hash,
  &my_interfaces__action__GoToPose__get_type_description,
  &my_interfaces__action__GoToPose__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, my_interfaces, action, GoToPose)()
{
  // Thread-safe by always writing the same values to the static struct
  _my_interfaces__action__GoToPose__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_interfaces, action, GoToPose_SendGoal)();
  _my_interfaces__action__GoToPose__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_interfaces, action, GoToPose_GetResult)();
  _my_interfaces__action__GoToPose__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _my_interfaces__action__GoToPose__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, my_interfaces, action, GoToPose_FeedbackMessage)();
  _my_interfaces__action__GoToPose__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_my_interfaces__action__GoToPose__typesupport_c;
}

#ifdef __cplusplus
}
#endif
