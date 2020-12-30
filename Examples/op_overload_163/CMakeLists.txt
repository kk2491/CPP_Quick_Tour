cmake_minimum_required(VERSION 3.0)

project(op_overload_163)

set(CMAKE_CXX_STANDARD 14)

message("Project Name")
message("${PROJECT_NAME}")

message("CMake Path")
message("${CMAKE_INSTALL_PREFIX}")

message("CMake Standard")
message("${CMAKE_CXX_STANDARD}")

#=================================#

include_directories(.)
set(SOURCES mystring.cpp main.cpp)

add_executable("${PROJECT_NAME}" ${SOURCES})
