#include "ros/ros.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "my_cpp_node");
  ros::NodeHandle nh;

  ROS_INFO("Hello from C++ Node!");

  ros::spin();

  return 0;
}
