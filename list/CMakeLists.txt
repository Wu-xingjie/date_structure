cmake_minimum_required(VERSION 3.10)
project(clink CXX)

set(CMAKE_CXX_STANDARD 11)
set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)
set(EXEPATH ${CMAKE_CURRENT_SOURCE_DIR}/build/exe)
set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)

include_directories(${HEADPATH})

add_executable(main main.cpp)

link_libraries(${LIBPATH})

target_link_libraries(main clink)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/exe)

set(CMAKE_BUILD_TYPE debug)