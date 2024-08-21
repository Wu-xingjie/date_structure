cmake_minimum_required(VERSION 3.27)

project(recursive CXX)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE "debug")

#massage("cmake build type:${CMAKE_BUILD_TYPE}")

add_executable(main recursive.cpp)