// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/Target.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__Target__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9d, 0x20, 0x78, 0x53, 0x6e, 0xa2, 0xad, 0x03,
      0xb7, 0xee, 0x49, 0x26, 0x3a, 0x7b, 0xc0, 0x79,
      0xe8, 0xd9, 0xe5, 0x4c, 0x3e, 0x8e, 0xca, 0x63,
      0xac, 0x20, 0xae, 0x98, 0x2e, 0xe3, 0xc6, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__Target__TYPE_NAME[] = "interfaces/msg/Target";

// Define type names, field names, and default values
static char interfaces__msg__Target__FIELD_NAME__x[] = "x";
static char interfaces__msg__Target__FIELD_NAME__y[] = "y";
static char interfaces__msg__Target__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field interfaces__msg__Target__FIELDS[] = {
  {
    {interfaces__msg__Target__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Target__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Target__FIELD_NAME__yaw, 3, 3},
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
interfaces__msg__Target__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__Target__TYPE_NAME, 21, 21},
      {interfaces__msg__Target__FIELDS, 3, 3},
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
interfaces__msg__Target__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__Target__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__Target__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__Target__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
