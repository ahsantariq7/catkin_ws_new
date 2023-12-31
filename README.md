# ROS Catkin Workspace

This repository contains a [ROS](http://www.ros.org/) Catkin workspace named `catkin_ws_new`. Below is a brief overview of the directory structure:

```
.
├── build               # Build artifacts
├── devel               # Development setup
├── src                 # Source code of ROS packages
│   ├── my_ros_package  # Custom ROS package
│   │   ├── include
│   │   │   └── my_ros_package
│   │   ├── src
│   │   │   ├── my_cpp_node.cpp
│   │   │   └── my_python_node.py
│   │   ├── CMakeLists.txt
│   │   ├── package.xml
│   ├── new             # Another ROS package
│   │   ├── include
│   │   ├── src
│   │   │   └── hello.cpp
│   │   ├── CMakeLists.txt
│   │   ├── package.xml
├── README.md           # Project readme file
```

## Custom ROS Package (`my_ros_package`)

The `my_ros_package` directory contains a custom ROS package with the following structure:

- `include/my_ros_package`: Header files for the ROS package
- `src/my_cpp_node.cpp`: C++ node source code
- `src/my_python_node.py`: Python node source code
- `CMakeLists.txt`: CMake configuration file for building the package
- `package.xml`: ROS package manifest file

## Another ROS Package (`new`)

The `new` directory contains another ROS package with the following structure:

- `include/new`: Header files for the ROS package
- `src/hello.cpp`: C++ source code
- `CMakeLists.txt`: CMake configuration file for building the package
- `package.xml`: ROS package manifest file

## Building the Workspace

To build the ROS workspace, navigate to the root directory (`catkin_ws_new`) and run the following commands:

```bash
cd catkin_ws_new
catkin_make
```

This will generate build artifacts in the `build` directory and set up the development environment in the `devel` directory.

Feel free to customize and extend the ROS packages according to your project requirements.
