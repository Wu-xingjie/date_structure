# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wxj/date_structure/linearlist/arraylist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/date_structure/linearlist/arraylist/build

# Include any dependencies generated for this target.
include CMakeFiles/arraylist.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arraylist.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arraylist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arraylist.dir/flags.make

CMakeFiles/arraylist.dir/arraylist.cpp.o: CMakeFiles/arraylist.dir/flags.make
CMakeFiles/arraylist.dir/arraylist.cpp.o: /home/wxj/date_structure/linearlist/arraylist/arraylist.cpp
CMakeFiles/arraylist.dir/arraylist.cpp.o: CMakeFiles/arraylist.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/date_structure/linearlist/arraylist/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arraylist.dir/arraylist.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arraylist.dir/arraylist.cpp.o -MF CMakeFiles/arraylist.dir/arraylist.cpp.o.d -o CMakeFiles/arraylist.dir/arraylist.cpp.o -c /home/wxj/date_structure/linearlist/arraylist/arraylist.cpp

CMakeFiles/arraylist.dir/arraylist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arraylist.dir/arraylist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/date_structure/linearlist/arraylist/arraylist.cpp > CMakeFiles/arraylist.dir/arraylist.cpp.i

CMakeFiles/arraylist.dir/arraylist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arraylist.dir/arraylist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/date_structure/linearlist/arraylist/arraylist.cpp -o CMakeFiles/arraylist.dir/arraylist.cpp.s

# Object files for target arraylist
arraylist_OBJECTS = \
"CMakeFiles/arraylist.dir/arraylist.cpp.o"

# External object files for target arraylist
arraylist_EXTERNAL_OBJECTS =

libarraylist.a: CMakeFiles/arraylist.dir/arraylist.cpp.o
libarraylist.a: CMakeFiles/arraylist.dir/build.make
libarraylist.a: CMakeFiles/arraylist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/date_structure/linearlist/arraylist/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libarraylist.a"
	$(CMAKE_COMMAND) -P CMakeFiles/arraylist.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arraylist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arraylist.dir/build: libarraylist.a
.PHONY : CMakeFiles/arraylist.dir/build

CMakeFiles/arraylist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arraylist.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arraylist.dir/clean

CMakeFiles/arraylist.dir/depend:
	cd /home/wxj/date_structure/linearlist/arraylist/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/date_structure/linearlist/arraylist /home/wxj/date_structure/linearlist/arraylist /home/wxj/date_structure/linearlist/arraylist/build /home/wxj/date_structure/linearlist/arraylist/build /home/wxj/date_structure/linearlist/arraylist/build/CMakeFiles/arraylist.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/arraylist.dir/depend
