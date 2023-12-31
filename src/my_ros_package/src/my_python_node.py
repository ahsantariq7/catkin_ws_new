#!/usr/bin/env python

import rospy

def main():
    rospy.init_node('my_python_node')
    rospy.loginfo("Hello from Python Node!")

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
