cmake_minimum_required(VERSION 3.10)
project(main CXX)

aux_source_directory(./ SRC)

include_directories(${HEADPATH})

add_executable(test_array ${SRC})

link_directories(${LIBPATH})
link_libraries(array)

target_link_libraries(test_array array)

set(EXECUTABLE_OUTPUT_PATH ${EXEPATH})