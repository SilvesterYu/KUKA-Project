// Generated by gencpp from file iiwa_msgs/MoveAlongSplineFeedback.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_MOVEALONGSPLINEFEEDBACK_H
#define IIWA_MSGS_MESSAGE_MOVEALONGSPLINEFEEDBACK_H


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
struct MoveAlongSplineFeedback_
{
  typedef MoveAlongSplineFeedback_<ContainerAllocator> Type;

  MoveAlongSplineFeedback_()
    {
    }
  MoveAlongSplineFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct MoveAlongSplineFeedback_

typedef ::iiwa_msgs::MoveAlongSplineFeedback_<std::allocator<void> > MoveAlongSplineFeedback;

typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineFeedback > MoveAlongSplineFeedbackPtr;
typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineFeedback const> MoveAlongSplineFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/MoveAlongSplineFeedback";
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Feedback\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveAlongSplineFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::iiwa_msgs::MoveAlongSplineFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_MOVEALONGSPLINEFEEDBACK_H
