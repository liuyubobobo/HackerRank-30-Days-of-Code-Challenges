cmake_minimum_required(VERSION 3.5)
project(Day_0_Hello_World)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Day_0_Hello_World ${SOURCE_FILES})