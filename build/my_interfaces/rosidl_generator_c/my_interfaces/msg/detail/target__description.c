// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__Target__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xce, 0x8c, 0x9f, 0xb0, 0x29, 0x87, 0x1c,
      0xe7, 0xc9, 0xc6, 0xdf, 0x74, 0x6d, 0xda, 0xd1,
      0xf7, 0x1d, 0xad, 0xb5, 0xee, 0x94, 0x66, 0x24,
      0xdb, 0xca, 0xa3, 0xc9, 0x3b, 0xcc, 0xa9, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_interfaces__msg__Target__TYPE_NAME[] = "my_interfaces/msg/Target";

// Define type names, field names, and default values
static char my_interfaces__msg__Target__FIELD_NAME__x[] = "x";
static char my_interfaces__msg__Target__FIELD_NAME__y[] = "y";
static char my_interfaces__msg__Target__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__Target__FIELDS[] = {
  {
    {my_interfaces__msg__Target__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__Target__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__Target__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__Target__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__Target__TYPE_NAME, 24, 24},
      {my_interfaces__msg__Target__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__Target__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__Target__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__Target__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__Target__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
