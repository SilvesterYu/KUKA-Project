// Generated by gencpp from file iiwa_msgs/SetPTPCartesianSpeedLimitsResponse.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSRESPONSE_H
#define IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SetPTPCartesianSpeedLimitsResponse_
{
  typedef SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> Type;

  SetPTPCartesianSpeedLimitsResponse_()
    : success(false)
    , error()  {
    }
  SetPTPCartesianSpeedLimitsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPTPCartesianSpeedLimitsResponse_

typedef ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<std::allocator<void> > SetPTPCartesianSpeedLimitsResponse;

typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse > SetPTPCartesianSpeedLimitsResponsePtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse const> SetPTPCartesianSpeedLimitsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45872d25d65c97743cc71afc6d4e884d";
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45872d25d65c9774ULL;
  static const uint64_t static_value2 = 0x3cc71afc6d4e884dULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetPTPCartesianSpeedLimitsResponse";
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string error\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPTPCartesianSpeedLimitsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSRESPONSE_H
