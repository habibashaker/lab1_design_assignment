#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to my_interfaces__srv__Speed_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Speed_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Speed_Request {
  type RmwMsg = super::srv::rmw::Speed_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        max_linear_speed: msg.max_linear_speed,
        max_angular_speed: msg.max_angular_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      max_linear_speed: msg.max_linear_speed,
      max_angular_speed: msg.max_angular_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      max_linear_speed: msg.max_linear_speed,
      max_angular_speed: msg.max_angular_speed,
    }
  }
}


// Corresponds to my_interfaces__srv__Speed_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Speed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Speed_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Speed_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Speed_Response {
  type RmwMsg = super::srv::rmw::Speed_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        done: msg.done,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      done: msg.done,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      done: msg.done,
      message: msg.message.to_string(),
    }
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


