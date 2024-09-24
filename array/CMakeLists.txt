cmake_minimum_required(VERSION 3.10)
project(array_practice CXX)
set(CMAKE_CXX_STANDARD 11)

set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)
set(EXEPATH ${CMAKE_CURRENT_SOURCE_DIR}/build/exe)
set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_subdirectory(src)
add_subdirectory(test)