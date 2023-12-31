cmake_minimum_required(VERSION 3.0.2)
project(my_ros_package)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

## Specify additional locations of header files
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ executable
add_executable(my_cpp_node src/my_cpp_node.cpp)

## Specify libraries to link the executable target against
target_link_libraries(my_cpp_node ${catkin_LIBRARIES})

## Mark executables for installation
install(TARGETS my_cpp_node
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## Uncomment this section if you have Python scripts to be installed.
# catkin_install_python(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## If your package contains messages, services, or actions, you should uncomment and configure these sections accordingly. If not, you can leave them commented.

## Generate messages in the 'msg' folder
# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   std_msgs
# )

## If you have dynamic reconfigure parameters, uncomment and configure this section.
# find_package(catkin REQUIRED COMPONENTS dynamic_reconfigure)
# generate_dynamic_reconfigure_options(
#   cfg/DynReconf1.cfg
#   cfg/DynReconf2.cfg
# )

## Declare dependencies, libraries, and headers for your package.
catkin_package(
  CATKIN_DEPENDS roscpp rospy std_msgs
)

