// Generated by gencpp from file intera_motion_msgs/MotionCommandResult.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_MOTIONCOMMANDRESULT_H
#define INTERA_MOTION_MSGS_MESSAGE_MOTIONCOMMANDRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <intera_motion_msgs/TrajectoryAnalysis.h>

namespace intera_motion_msgs
{
template <class ContainerAllocator>
struct MotionCommandResult_
{
  typedef MotionCommandResult_<ContainerAllocator> Type;

  MotionCommandResult_()
    : result(false)
    , errorId()
    , trajectory_analysis()
    , last_successful_waypoint(0)  {
    }
  MotionCommandResult_(const ContainerAllocator& _alloc)
    : result(false)
    , errorId(_alloc)
    , trajectory_analysis(_alloc)
    , last_successful_waypoint(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _errorId_type;
  _errorId_type errorId;

   typedef  ::intera_motion_msgs::TrajectoryAnalysis_<ContainerAllocator>  _trajectory_analysis_type;
  _trajectory_analysis_type trajectory_analysis;

   typedef int32_t _last_successful_waypoint_type;
  _last_successful_waypoint_type last_successful_waypoint;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FAILED_TO_PARAMETERIZE)
  #undef FAILED_TO_PARAMETERIZE
#endif
#if defined(_WIN32) && defined(PLANNED_MOTION_COLLISION)
  #undef PLANNED_MOTION_COLLISION
#endif
#if defined(_WIN32) && defined(INVALID_TRAJECTORY_MESSAGE)
  #undef INVALID_TRAJECTORY_MESSAGE
#endif
#if defined(_WIN32) && defined(ENDPOINT_DOES_NOT_EXIST)
  #undef ENDPOINT_DOES_NOT_EXIST
#endif
#if defined(_WIN32) && defined(CARTESIAN_INTERPOLATION_FAILED)
  #undef CARTESIAN_INTERPOLATION_FAILED
#endif
#if defined(_WIN32) && defined(FINAL_POSE_NOT_WITHIN_TOLERANCE)
  #undef FINAL_POSE_NOT_WITHIN_TOLERANCE
#endif
#if defined(_WIN32) && defined(CONTROLLER_NOT_FOLLOWING)
  #undef CONTROLLER_NOT_FOLLOWING
#endif
#if defined(_WIN32) && defined(ZERO_G_ACTIVATED_DURING_TRAJECTORY)
  #undef ZERO_G_ACTIVATED_DURING_TRAJECTORY
#endif
#if defined(_WIN32) && defined(PLANNED_JOINT_ACCEL_LIMIT)
  #undef PLANNED_JOINT_ACCEL_LIMIT
#endif
#if defined(_WIN32) && defined(HAVE_NOT_REACHED_FIRST_WAYPOINT)
  #undef HAVE_NOT_REACHED_FIRST_WAYPOINT
#endif
#if defined(_WIN32) && defined(GENERAL_TRAJECTORY_FAILURE)
  #undef GENERAL_TRAJECTORY_FAILURE
#endif

  enum {
    HAVE_NOT_REACHED_FIRST_WAYPOINT = -1,
    GENERAL_TRAJECTORY_FAILURE = -2,
  };

  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FAILED_TO_PARAMETERIZE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PLANNED_MOTION_COLLISION;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> INVALID_TRAJECTORY_MESSAGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ENDPOINT_DOES_NOT_EXIST;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CARTESIAN_INTERPOLATION_FAILED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FINAL_POSE_NOT_WITHIN_TOLERANCE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTROLLER_NOT_FOLLOWING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ZERO_G_ACTIVATED_DURING_TRAJECTORY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PLANNED_JOINT_ACCEL_LIMIT;

  typedef boost::shared_ptr< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> const> ConstPtr;

}; // struct MotionCommandResult_

typedef ::intera_motion_msgs::MotionCommandResult_<std::allocator<void> > MotionCommandResult;

typedef boost::shared_ptr< ::intera_motion_msgs::MotionCommandResult > MotionCommandResultPtr;
typedef boost::shared_ptr< ::intera_motion_msgs::MotionCommandResult const> MotionCommandResultConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::FAILED_TO_PARAMETERIZE =
        
          "FAILED_TO_PARAMETERIZE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::PLANNED_MOTION_COLLISION =
        
          "PLANNED_MOTION_COLLISION"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::INVALID_TRAJECTORY_MESSAGE =
        
          "INVALID_TRAJECTORY_MESSAGE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::ENDPOINT_DOES_NOT_EXIST =
        
          "ENDPOINT_DOES_NOT_EXIST"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::CARTESIAN_INTERPOLATION_FAILED =
        
          "CARTESIAN_INTERPOLATION_FAILED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::FINAL_POSE_NOT_WITHIN_TOLERANCE =
        
          "FINAL_POSE_NOT_WITHIN_TOLERANCE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::CONTROLLER_NOT_FOLLOWING =
        
          "CONTROLLER_NOT_FOLLOWING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::ZERO_G_ACTIVATED_DURING_TRAJECTORY =
        
          "ZERO_G_ACTIVATED_DURING_TRAJECTORY"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      MotionCommandResult_<ContainerAllocator>::PLANNED_JOINT_ACCEL_LIMIT =
        
          "PLANNED_JOINT_ACCEL_LIMIT"
        
        ;
   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator1> & lhs, const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.errorId == rhs.errorId &&
    lhs.trajectory_analysis == rhs.trajectory_analysis &&
    lhs.last_successful_waypoint == rhs.last_successful_waypoint;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator1> & lhs, const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_motion_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "481449bf41047922d4c99f513b0dd227";
  }

  static const char* value(const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x481449bf41047922ULL;
  static const uint64_t static_value2 = 0xd4c99f513b0dd227ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/MotionCommandResult";
  }

  static const char* value(const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# result\n"
"bool result\n"
"\n"
"string errorId\n"
"string FAILED_TO_PARAMETERIZE=FAILED_TO_PARAMETERIZE\n"
"string PLANNED_MOTION_COLLISION=PLANNED_MOTION_COLLISION\n"
"string INVALID_TRAJECTORY_MESSAGE=INVALID_TRAJECTORY_MESSAGE\n"
"string ENDPOINT_DOES_NOT_EXIST=ENDPOINT_DOES_NOT_EXIST\n"
"string CARTESIAN_INTERPOLATION_FAILED=CARTESIAN_INTERPOLATION_FAILED\n"
"string FINAL_POSE_NOT_WITHIN_TOLERANCE=FINAL_POSE_NOT_WITHIN_TOLERANCE\n"
"string CONTROLLER_NOT_FOLLOWING=CONTROLLER_NOT_FOLLOWING\n"
"string ZERO_G_ACTIVATED_DURING_TRAJECTORY=ZERO_G_ACTIVATED_DURING_TRAJECTORY\n"
"string PLANNED_JOINT_ACCEL_LIMIT=PLANNED_JOINT_ACCEL_LIMIT\n"
"\n"
"TrajectoryAnalysis trajectory_analysis\n"
"\n"
"int32 last_successful_waypoint\n"
"int32 HAVE_NOT_REACHED_FIRST_WAYPOINT=-1\n"
"int32 GENERAL_TRAJECTORY_FAILURE=-2\n"
"\n"
"\n"
"================================================================================\n"
"MSG: intera_motion_msgs/TrajectoryAnalysis\n"
"# The duration of the reference trajectory, as originally planned\n"
"float64 planned_duration\n"
"\n"
"# The measured duration of the trajectory, as executed\n"
"float64 measured_duration\n"
"\n"
"# Minimum commanded angle during trajectory for each joint\n"
"float64[] min_angle_command\n"
"\n"
"# Maximum commanded angle during trajectory for each joint\n"
"float64[] max_angle_command\n"
"\n"
"# Peak speed command = max(abs(reference velocity)) for each joint\n"
"float64[] peak_speed_command\n"
"\n"
"# Peak accel command = max(abs(reference acceleration)) for each joint\n"
"float64[] peak_accel_command\n"
"\n"
"# Peak jerk command = max(abs(reference jerk)) for each joint\n"
"float64[] peak_jerk_command\n"
"\n"
"# Minimum trajectory time rate observed\n"
"float64 min_time_rate\n"
"\n"
"# Maximium trajectory time rate observed\n"
"float64 max_time_rate\n"
"\n"
"# Max joint position error = max(abs(position error)) for each joint\n"
"float64[] max_position_error\n"
"\n"
"# Max joint velocity error = max(abs(velocity error)) for each joint\n"
"float64[] max_velocity_error\n"
;
  }

  static const char* value(const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.errorId);
      stream.next(m.trajectory_analysis);
      stream.next(m.last_successful_waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionCommandResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::MotionCommandResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "errorId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.errorId);
    s << indent << "trajectory_analysis: ";
    s << std::endl;
    Printer< ::intera_motion_msgs::TrajectoryAnalysis_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory_analysis);
    s << indent << "last_successful_waypoint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.last_successful_waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_MOTIONCOMMANDRESULT_H
