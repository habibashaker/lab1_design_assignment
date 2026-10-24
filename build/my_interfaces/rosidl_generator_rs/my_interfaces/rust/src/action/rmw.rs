
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_Goal__init(msg: *mut GoToPose_Goal) -> bool;
    fn my_interfaces__action__GoToPose_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Goal>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Goal>);
    fn my_interfaces__action__GoToPose_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Goal>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_point: super::super::msg::rmw::Target,

}



impl Default for GoToPose_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Goal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_Result__init(msg: *mut GoToPose_Result) -> bool;
    fn my_interfaces__action__GoToPose_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Result>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Result>);
    fn my_interfaces__action__GoToPose_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Result>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,

}



impl Default for GoToPose_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_Result__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Result() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_Feedback__init(msg: *mut GoToPose_Feedback) -> bool;
    fn my_interfaces__action__GoToPose_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Feedback>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Feedback>);
    fn my_interfaces__action__GoToPose_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_Feedback>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_distance: f32,

}



impl Default for GoToPose_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_Feedback() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_FeedbackMessage__init(msg: *mut GoToPose_FeedbackMessage) -> bool;
    fn my_interfaces__action__GoToPose_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_FeedbackMessage>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_FeedbackMessage>);
    fn my_interfaces__action__GoToPose_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_FeedbackMessage>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GoToPose_Feedback,

}



impl Default for GoToPose_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_FeedbackMessage() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_Goal__init(msg: *mut Square_Goal) -> bool;
    fn my_interfaces__action__Square_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_Goal>, size: usize) -> bool;
    fn my_interfaces__action__Square_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_Goal>);
    fn my_interfaces__action__Square_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_Goal>) -> bool;
}

// Corresponds to my_interfaces__action__Square_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side_length: f32,

}



impl Default for Square_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Goal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_Result__init(msg: *mut Square_Result) -> bool;
    fn my_interfaces__action__Square_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_Result>, size: usize) -> bool;
    fn my_interfaces__action__Square_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_Result>);
    fn my_interfaces__action__Square_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_Result>) -> bool;
}

// Corresponds to my_interfaces__action__Square_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,

}



impl Default for Square_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_Result__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Result() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_Feedback__init(msg: *mut Square_Feedback) -> bool;
    fn my_interfaces__action__Square_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_Feedback>, size: usize) -> bool;
    fn my_interfaces__action__Square_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_Feedback>);
    fn my_interfaces__action__Square_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_Feedback>) -> bool;
}

// Corresponds to my_interfaces__action__Square_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sides_done: i32,

}



impl Default for Square_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_Feedback() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_FeedbackMessage__init(msg: *mut Square_FeedbackMessage) -> bool;
    fn my_interfaces__action__Square_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_FeedbackMessage>, size: usize) -> bool;
    fn my_interfaces__action__Square_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_FeedbackMessage>);
    fn my_interfaces__action__Square_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_FeedbackMessage>) -> bool;
}

// Corresponds to my_interfaces__action__Square_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Square_Feedback,

}



impl Default for Square_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_FeedbackMessage() }
  }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_SendGoal_Request__init(msg: *mut GoToPose_SendGoal_Request) -> bool;
    fn my_interfaces__action__GoToPose_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Request>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Request>);
    fn my_interfaces__action__GoToPose_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Request>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GoToPose_Goal,

}



impl Default for GoToPose_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_SendGoal_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_SendGoal_Response__init(msg: *mut GoToPose_SendGoal_Response) -> bool;
    fn my_interfaces__action__GoToPose_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Response>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Response>);
    fn my_interfaces__action__GoToPose_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_SendGoal_Response>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GoToPose_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_SendGoal_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_GetResult_Request__init(msg: *mut GoToPose_GetResult_Request) -> bool;
    fn my_interfaces__action__GoToPose_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Request>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Request>);
    fn my_interfaces__action__GoToPose_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Request>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GoToPose_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_GetResult_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__GoToPose_GetResult_Response__init(msg: *mut GoToPose_GetResult_Response) -> bool;
    fn my_interfaces__action__GoToPose_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Response>, size: usize) -> bool;
    fn my_interfaces__action__GoToPose_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Response>);
    fn my_interfaces__action__GoToPose_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoToPose_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GoToPose_GetResult_Response>) -> bool;
}

// Corresponds to my_interfaces__action__GoToPose_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoToPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GoToPose_Result,

}



impl Default for GoToPose_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__GoToPose_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__GoToPose_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoToPose_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__GoToPose_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoToPose_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoToPose_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/GoToPose_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__GoToPose_GetResult_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_SendGoal_Request__init(msg: *mut Square_SendGoal_Request) -> bool;
    fn my_interfaces__action__Square_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Request>, size: usize) -> bool;
    fn my_interfaces__action__Square_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Request>);
    fn my_interfaces__action__Square_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Request>) -> bool;
}

// Corresponds to my_interfaces__action__Square_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Square_Goal,

}



impl Default for Square_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_SendGoal_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_SendGoal_Response__init(msg: *mut Square_SendGoal_Response) -> bool;
    fn my_interfaces__action__Square_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Response>, size: usize) -> bool;
    fn my_interfaces__action__Square_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Response>);
    fn my_interfaces__action__Square_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_SendGoal_Response>) -> bool;
}

// Corresponds to my_interfaces__action__Square_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Square_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_SendGoal_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_GetResult_Request__init(msg: *mut Square_GetResult_Request) -> bool;
    fn my_interfaces__action__Square_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Request>, size: usize) -> bool;
    fn my_interfaces__action__Square_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Request>);
    fn my_interfaces__action__Square_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Request>) -> bool;
}

// Corresponds to my_interfaces__action__Square_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Square_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_GetResult_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__Square_GetResult_Response__init(msg: *mut Square_GetResult_Response) -> bool;
    fn my_interfaces__action__Square_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Response>, size: usize) -> bool;
    fn my_interfaces__action__Square_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Response>);
    fn my_interfaces__action__Square_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Square_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Square_GetResult_Response>) -> bool;
}

// Corresponds to my_interfaces__action__Square_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Square_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Square_Result,

}



impl Default for Square_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__Square_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__Square_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Square_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__Square_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Square_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Square_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/Square_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__Square_GetResult_Response() }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__GoToPose_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__GoToPose_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GoToPose_SendGoal;

impl rosidl_runtime_rs::Service for GoToPose_SendGoal {
    type Request = GoToPose_SendGoal_Request;
    type Response = GoToPose_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__GoToPose_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__GoToPose_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__GoToPose_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GoToPose_GetResult;

impl rosidl_runtime_rs::Service for GoToPose_GetResult {
    type Request = GoToPose_GetResult_Request;
    type Response = GoToPose_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__GoToPose_GetResult() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__Square_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__Square_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Square_SendGoal;

impl rosidl_runtime_rs::Service for Square_SendGoal {
    type Request = Square_SendGoal_Request;
    type Response = Square_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__Square_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__Square_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__Square_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Square_GetResult;

impl rosidl_runtime_rs::Service for Square_GetResult {
    type Request = Square_GetResult_Request;
    type Response = Square_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__Square_GetResult() }
    }
}


