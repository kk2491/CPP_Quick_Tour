cmake_minimum_required(VERSION 3.0)

project(cmake_example_1)

message("Project Name")
message("${PROJECT_NAME}")

message("CMake Path")
message("${CMAKE_INSTALL_PREFIX}")

message("CMake Standard")
message("${CMAKE_CXX_STANDARD}")

add_executable("${PROJECT_NAME}" example_1.cpp)