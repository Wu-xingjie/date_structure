cmake_minimum_required(VERSION 3.27)

project(arraylist_prac CXX)

set(CMAKE_CXX_STANDARD 11)


add_library(arraylist arraylist.cpp)
# add_library(linearlist virtual_linear_list.h)
# target_link_libraries(arraylist linearlist)

add_executable(main main.cpp)
target_link_libraries(main arraylist)