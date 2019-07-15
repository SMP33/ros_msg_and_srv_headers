// Generated by gencpp from file msg_dji_core/juk_dji_device_status_msg.msg
// DO NOT EDIT!


#ifndef MSG_DJI_CORE_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H
#define MSG_DJI_CORE_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace msg_dji_core
{
template <class ContainerAllocator>
struct juk_dji_device_status_msg_
{
  typedef juk_dji_device_status_msg_<ContainerAllocator> Type;

  juk_dji_device_status_msg_()
    : GEAR_UP(0)
    , GEAR_DOWN(0)
    , authority(0)
    , armed(0)
    , gear(0)
    , changeTime()  {
    }
  juk_dji_device_status_msg_(const ContainerAllocator& _alloc)
    : GEAR_UP(0)
    , GEAR_DOWN(0)
    , authority(0)
    , armed(0)
    , gear(0)
    , changeTime()  {
  (void)_alloc;
    }



   typedef uint8_t _GEAR_UP_type;
  _GEAR_UP_type GEAR_UP;

   typedef uint8_t _GEAR_DOWN_type;
  _GEAR_DOWN_type GEAR_DOWN;

   typedef uint8_t _authority_type;
  _authority_type authority;

   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef uint8_t _gear_type;
  _gear_type gear;

   typedef ros::Time _changeTime_type;
  _changeTime_type changeTime;



  enum {
    CONTROL_BY_RC = 1u,
    CONTROL_BY_MOBILE = 2u,
    CONTROL_BY_SDK = 3u,
    ARMED = 1u,
    DISARMED = 0u,
  };


  typedef boost::shared_ptr< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> const> ConstPtr;

}; // struct juk_dji_device_status_msg_

typedef ::msg_dji_core::juk_dji_device_status_msg_<std::allocator<void> > juk_dji_device_status_msg;

typedef boost::shared_ptr< ::msg_dji_core::juk_dji_device_status_msg > juk_dji_device_status_msgPtr;
typedef boost::shared_ptr< ::msg_dji_core::juk_dji_device_status_msg const> juk_dji_device_status_msgConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msg_dji_core

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'msg_dji_core': ['/home/bird/catkin_ws/src/msg_dji_core/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2243f28f5cceb183b026afdf2ea76ed2";
  }

  static const char* value(const ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2243f28f5cceb183ULL;
  static const uint64_t static_value2 = 0xb026afdf2ea76ed2ULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_dji_core/juk_dji_device_status_msg";
  }

  static const char* value(const ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# authority constants\n"
"uint8 CONTROL_BY_RC = 1\n"
"uint8 CONTROL_BY_MOBILE = 2\n"
"uint8 CONTROL_BY_SDK = 3\n"
"# arm constants \n"
"uint8 ARMED = 1\n"
"uint8 DISARMED = 0\n"
"# gear constants\n"
"uint8 GEAR_UP\n"
"uint8 GEAR_DOWN\n"
"#variables\n"
"uint8 authority\n"
"uint8 armed\n"
"uint8 gear\n"
"time changeTime	 #time of last authority change\n"
;
  }

  static const char* value(const ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.GEAR_UP);
      stream.next(m.GEAR_DOWN);
      stream.next(m.authority);
      stream.next(m.armed);
      stream.next(m.gear);
      stream.next(m.changeTime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct juk_dji_device_status_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_dji_core::juk_dji_device_status_msg_<ContainerAllocator>& v)
  {
    s << indent << "GEAR_UP: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.GEAR_UP);
    s << indent << "GEAR_DOWN: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.GEAR_DOWN);
    s << indent << "authority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.authority);
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "gear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gear);
    s << indent << "changeTime: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.changeTime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_DJI_CORE_MESSAGE_JUK_DJI_DEVICE_STATUS_MSG_H
