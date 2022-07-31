// Generated by gencpp from file iiwa_msgs/MoveToCartesianPoseAction.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_MOVETOCARTESIANPOSEACTION_H
#define IIWA_MSGS_MESSAGE_MOVETOCARTESIANPOSEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iiwa_msgs/MoveToCartesianPoseActionGoal.h>
#include <iiwa_msgs/MoveToCartesianPoseActionResult.h>
#include <iiwa_msgs/MoveToCartesianPoseActionFeedback.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct MoveToCartesianPoseAction_
{
  typedef MoveToCartesianPoseAction_<ContainerAllocator> Type;

  MoveToCartesianPoseAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  MoveToCartesianPoseAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::iiwa_msgs::MoveToCartesianPoseActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::iiwa_msgs::MoveToCartesianPoseActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::iiwa_msgs::MoveToCartesianPoseActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToCartesianPoseAction_

typedef ::iiwa_msgs::MoveToCartesianPoseAction_<std::allocator<void> > MoveToCartesianPoseAction;

typedef boost::shared_ptr< ::iiwa_msgs::MoveToCartesianPoseAction > MoveToCartesianPoseActionPtr;
typedef boost::shared_ptr< ::iiwa_msgs::MoveToCartesianPoseAction const> MoveToCartesianPoseActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator1> & lhs, const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator1> & lhs, const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32ed5676866d8b996367c0351eeeb7de";
  }

  static const char* value(const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32ed5676866d8b99ULL;
  static const uint64_t static_value2 = 0x6367c0351eeeb7deULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/MoveToCartesianPoseAction";
  }

  static const char* value(const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"MoveToCartesianPoseActionGoal action_goal\n"
"MoveToCartesianPoseActionResult action_result\n"
"MoveToCartesianPoseActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"MoveToCartesianPoseGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"CartesianPose cartesian_pose\n"
"\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/CartesianPose\n"
"# Target Pose including redundancy information.\n"
"geometry_msgs/PoseStamped poseStamped\n"
"\n"
"# If you have issues with the robot not executing the motion copy this value from the Cartesian Position Tab of the\n"
"# robot SmartPad. Set both parameters to -1 to disable them.\n"
"RedundancyInformation redundancy\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/RedundancyInformation\n"
"# E1 parameter\n"
"# Specifies Angle of the elbow joint.\n"
"float64 e1\n"
"\n"
"# Status parameter\n"
"#   Bit 0: 1 - The robot is working above its head\n"
"#          0 - The robot is working in the ground area\n"
"#   Bit 1: 1 - Angle A4 < 0°\n"
"#          0 - Angle A4 >= 0°\n"
"#   Bit 2: 1 - Angle A6 <= 0\n"
"#          0 - Angle A6 > 0\n"
"int32 status\n"
"\n"
"# Turn parameter\n"
"# According to Sunrise handbook this is not used for the iiwa.\n"
"int32 turn\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"MoveToCartesianPoseResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"bool success\n"
"string error\n"
"\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"MoveToCartesianPoseFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: iiwa_msgs/MoveToCartesianPoseFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Feedback\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToCartesianPoseAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::MoveToCartesianPoseAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveToCartesianPoseActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveToCartesianPoseActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveToCartesianPoseActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_MOVETOCARTESIANPOSEACTION_H
