#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Speed_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__Speed_Request__init(msg: *mut Speed_Request) -> bool;
    fn my_interfaces__srv__Speed_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Speed_Request>, size: usize) -> bool;
    fn my_interfaces__srv__Speed_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Speed_Request>);
    fn my_interfaces__srv__Speed_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Speed_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Speed_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__Speed_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Speed_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular_speed: f32,

}



impl Default for Speed_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__Speed_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__Speed_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Speed_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Speed_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Speed_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/Speed_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Speed_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Speed_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__Speed_Response__init(msg: *mut Speed_Response) -> bool;
    fn my_interfaces__srv__Speed_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Speed_Response>, size: usize) -> bool;
    fn my_interfaces__srv__Speed_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Speed_Response>);
    fn my_interfaces__srv__Speed_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Speed_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Speed_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__Speed_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Speed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Speed_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__Speed_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__Speed_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Speed_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Speed_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Speed_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Speed_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/Speed_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Speed_Response() }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__Speed() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__Speed
#[allow(missing_docs, non_camel_case_types)]
pub struct Speed;

impl rosidl_runtime_rs::Service for Speed {
    type Request = Speed_Request;
    type Response = Speed_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__Speed() }
    }
}


