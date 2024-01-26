#!/usr/bin/env python
import sys
import rospy
from your_package.srv import VectorMagnitude

def vector_magnitude_client(x, y, z):
    rospy.wait_for_service('vector_magnitude')
    try:
        vector_magnitude = rospy.ServiceProxy('vector_magnitude', VectorMagnitude)
        resp1 = vector_magnitude(x, y, z)
        return resp1.magnitude
    except rospy.ServiceException, e:
        print "Service call failed: %s"%e

if __name__ == "__main__":
    print "Requesting the magnitude of (3, 4, 5)"
    print "%s"%vector_magnitude_client(3, 4, 5)

#Catatan:
#Ganti your_package = nama package ROS yang digunakan.
#CustomMessage = nama pesan yang sesuai yang telah dibuat dengan rosmsg.