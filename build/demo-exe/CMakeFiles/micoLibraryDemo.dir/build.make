# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chrismorley/Documents/testProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chrismorley/Documents/testProject/build

# Include any dependencies generated for this target.
include demo-exe/CMakeFiles/micoLibraryDemo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include demo-exe/CMakeFiles/micoLibraryDemo.dir/compiler_depend.make

# Include the progress variables for this target.
include demo-exe/CMakeFiles/micoLibraryDemo.dir/progress.make

# Include the compile flags for this target's objects.
include demo-exe/CMakeFiles/micoLibraryDemo.dir/flags.make

demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o: demo-exe/CMakeFiles/micoLibraryDemo.dir/flags.make
demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o: ../demo-exe/main.cpp
demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o: demo-exe/CMakeFiles/micoLibraryDemo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chrismorley/Documents/testProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o"
	cd /home/chrismorley/Documents/testProject/build/demo-exe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o -MF CMakeFiles/micoLibraryDemo.dir/main.cpp.o.d -o CMakeFiles/micoLibraryDemo.dir/main.cpp.o -c /home/chrismorley/Documents/testProject/demo-exe/main.cpp

demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/micoLibraryDemo.dir/main.cpp.i"
	cd /home/chrismorley/Documents/testProject/build/demo-exe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chrismorley/Documents/testProject/demo-exe/main.cpp > CMakeFiles/micoLibraryDemo.dir/main.cpp.i

demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/micoLibraryDemo.dir/main.cpp.s"
	cd /home/chrismorley/Documents/testProject/build/demo-exe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chrismorley/Documents/testProject/demo-exe/main.cpp -o CMakeFiles/micoLibraryDemo.dir/main.cpp.s

# Object files for target micoLibraryDemo
micoLibraryDemo_OBJECTS = \
"CMakeFiles/micoLibraryDemo.dir/main.cpp.o"

# External object files for target micoLibraryDemo
micoLibraryDemo_EXTERNAL_OBJECTS =

demo-exe/micoLibraryDemo: demo-exe/CMakeFiles/micoLibraryDemo.dir/main.cpp.o
demo-exe/micoLibraryDemo: demo-exe/CMakeFiles/micoLibraryDemo.dir/build.make
demo-exe/micoLibraryDemo: MicoLibrary/libMicoLibrary.a
demo-exe/micoLibraryDemo: demo-exe/CMakeFiles/micoLibraryDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chrismorley/Documents/testProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable micoLibraryDemo"
	cd /home/chrismorley/Documents/testProject/build/demo-exe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/micoLibraryDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
demo-exe/CMakeFiles/micoLibraryDemo.dir/build: demo-exe/micoLibraryDemo
.PHONY : demo-exe/CMakeFiles/micoLibraryDemo.dir/build

demo-exe/CMakeFiles/micoLibraryDemo.dir/clean:
	cd /home/chrismorley/Documents/testProject/build/demo-exe && $(CMAKE_COMMAND) -P CMakeFiles/micoLibraryDemo.dir/cmake_clean.cmake
.PHONY : demo-exe/CMakeFiles/micoLibraryDemo.dir/clean

demo-exe/CMakeFiles/micoLibraryDemo.dir/depend:
	cd /home/chrismorley/Documents/testProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chrismorley/Documents/testProject /home/chrismorley/Documents/testProject/demo-exe /home/chrismorley/Documents/testProject/build /home/chrismorley/Documents/testProject/build/demo-exe /home/chrismorley/Documents/testProject/build/demo-exe/CMakeFiles/micoLibraryDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : demo-exe/CMakeFiles/micoLibraryDemo.dir/depend
