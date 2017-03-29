cmake_minimum_required(VERSION 3.6)
project(stacks_and_queues)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Point.cpp h/Point.h src/Person.cpp h/Person.h src/Queue.cpp h/Queue.h h/Order.h)
add_executable(stacks_and_queues ${SOURCE_FILES})