#!/usr/bin/env python
import rospy
from std_msgs.msg import Int64, Float64, String, Bool

def callback(data):
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.nama)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber('chatter', CustomMessage, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()