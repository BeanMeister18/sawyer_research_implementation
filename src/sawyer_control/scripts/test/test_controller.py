#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Pose
from intera_core_msgs.msg import InteractionControlCommand
from intera_motion_interface import InteractionOptions, InteractionPublisher

def setup_cartesian_impedance_control(stiffness, damping, max_stiffness, interaction_frame, control_mode, nullspace_stiffness):
    interaction_options = InteractionOptions()

    # Activate interaction control
    interaction_options.set_interaction_control_active(True)
    interaction_options.set_K_impedance(stiffness)
    interaction_options.set_K_nullspace(nullspace_stiffness)
    interaction_options.set_max_impedance(max_stiffness)
    interaction_options.set_interaction_control_mode(control_mode)
    interaction_options.set_in_endpoint_frame(True)
    interaction_options.set_interaction_frame(interaction_frame)
    interaction_options.set_disable_damping_in_force_control(False)
    interaction_options.set_disable_reference_resetting(False)
    interaction_options.set_rotations_for_constrained_zeroG(False)

    msg = interaction_options.to_msg()
    msg.D_impedance = damping

    return msg

def shutdown_handler(ic_pub):
    """
    Handler to switch back to position control mode upon shutdown.
    """
    rospy.loginfo("Shutting down and switching to position control mode.")
    ic_pub.send_position_mode_cmd()

def main():
    rospy.init_node('cartesian_impedance_controller')

    # Retrieve parameters for impedance control, allowing for dynamic updates
    stiffness = rospy.get_param("~stiffness", [500.0, 500.0, 500.0, 30.0, 30.0, 30.0])
    damping = rospy.get_param("~damping", [8.0, 8.0, 8.0, 2.0, 2.0, 2.0])
    nullspace_stiffness = rospy.get_param("~nullspace_stiffness", [10.0] * 7)
    max_stiffness = rospy.get_param("~max_stiffness", [False, False, False, False, False, False])
    control_mode = rospy.get_param("~control_mode", [1, 1, 1, 1, 1, 1])

    # Define a neutral interaction frame (identity matrix)
    interaction_frame = Pose()
    interaction_frame.position.x = 0.0
    interaction_frame.position.y = 0.0
    interaction_frame.position.z = 0.0
    interaction_frame.orientation.w = 1.0
    interaction_frame.orientation.x = 0.0
    interaction_frame.orientation.y = 0.0
    interaction_frame.orientation.z = 0.0

    # Initialize the interaction publisher
    ic_pub = InteractionPublisher()

    # Register the shutdown handler to switch back to position control mode
    rospy.on_shutdown(lambda: shutdown_handler(ic_pub))

    # Publish control message continuously with updates from parameters
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        # Retrieve parameters dynamically to allow real-time adjustments
        stiffness = rospy.get_param("~stiffness", stiffness)
        damping = rospy.get_param("~damping", damping)
        nullspace_stiffness = rospy.get_param("~nullspace_stiffness", nullspace_stiffness)
        max_stiffness = rospy.get_param("~max_stiffness", max_stiffness)
        control_mode = rospy.get_param("~control_mode", control_mode)

        # Generate the interaction message
        interaction_msg = setup_cartesian_impedance_control(
            stiffness, damping, max_stiffness, interaction_frame, control_mode, nullspace_stiffness
        )
        rospy.loginfo("Publishing Cartesian Impedance Control settings")

        # Publish the interaction command at the specified rate
        ic_pub.send_command(interaction_msg, 10)
        rate.sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.logerr("ROS interrupt detected, exiting...")
