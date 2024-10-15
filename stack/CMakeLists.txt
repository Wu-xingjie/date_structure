cmake_minimum_required(VERSION 3.10)
project(STACK CXX)
set(CMAKE_CXX_STANDARD 11)

# add_subdirectory(src)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR})

message("head file: ${PROJECT_SOURCE_DIR}/include")

set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

add_executable(main main.cpp)

set(CMAKE_BUILD_TYPE debug)
# link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

# target_link_libraries(main seqstack)