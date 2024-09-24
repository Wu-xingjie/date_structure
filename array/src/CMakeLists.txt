cmake_minimum_required(VERSION 3.10)
project(array_practice_src CXX)

aux_source_directory(./ SRC)

include_directories(${HEADPATH})

set(LIBRARY_OUTPUT_PATH ${LIBPATH})

add_library(array SHARED ${SRC})