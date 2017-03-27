cmake_minimum_required(VERSION 3.6)
project(stacks_and_queues)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.h Person.cpp Person.h)
add_executable(stacks_and_queues ${SOURCE_FILES})