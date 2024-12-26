# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/hamza/from-0/ML-DL-From-Scratch/lmath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hamza/from-0/ML-DL-From-Scratch/lmath/build

# Include any dependencies generated for this target.
include CMakeFiles/lmath.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lmath.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lmath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lmath.dir/flags.make

CMakeFiles/lmath.dir/src/Matrix.cpp.o: CMakeFiles/lmath.dir/flags.make
CMakeFiles/lmath.dir/src/Matrix.cpp.o: /home/hamza/from-0/ML-DL-From-Scratch/lmath/src/Matrix.cpp
CMakeFiles/lmath.dir/src/Matrix.cpp.o: CMakeFiles/lmath.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hamza/from-0/ML-DL-From-Scratch/lmath/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lmath.dir/src/Matrix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lmath.dir/src/Matrix.cpp.o -MF CMakeFiles/lmath.dir/src/Matrix.cpp.o.d -o CMakeFiles/lmath.dir/src/Matrix.cpp.o -c /home/hamza/from-0/ML-DL-From-Scratch/lmath/src/Matrix.cpp

CMakeFiles/lmath.dir/src/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lmath.dir/src/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hamza/from-0/ML-DL-From-Scratch/lmath/src/Matrix.cpp > CMakeFiles/lmath.dir/src/Matrix.cpp.i

CMakeFiles/lmath.dir/src/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lmath.dir/src/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hamza/from-0/ML-DL-From-Scratch/lmath/src/Matrix.cpp -o CMakeFiles/lmath.dir/src/Matrix.cpp.s

# Object files for target lmath
lmath_OBJECTS = \
"CMakeFiles/lmath.dir/src/Matrix.cpp.o"

# External object files for target lmath
lmath_EXTERNAL_OBJECTS =

liblmath.a: CMakeFiles/lmath.dir/src/Matrix.cpp.o
liblmath.a: CMakeFiles/lmath.dir/build.make
liblmath.a: CMakeFiles/lmath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/hamza/from-0/ML-DL-From-Scratch/lmath/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblmath.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lmath.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lmath.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lmath.dir/build: liblmath.a
.PHONY : CMakeFiles/lmath.dir/build

CMakeFiles/lmath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lmath.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lmath.dir/clean

CMakeFiles/lmath.dir/depend:
	cd /home/hamza/from-0/ML-DL-From-Scratch/lmath/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hamza/from-0/ML-DL-From-Scratch/lmath /home/hamza/from-0/ML-DL-From-Scratch/lmath /home/hamza/from-0/ML-DL-From-Scratch/lmath/build /home/hamza/from-0/ML-DL-From-Scratch/lmath/build /home/hamza/from-0/ML-DL-From-Scratch/lmath/build/CMakeFiles/lmath.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lmath.dir/depend
