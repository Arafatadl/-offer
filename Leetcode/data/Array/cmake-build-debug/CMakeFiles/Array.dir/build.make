# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/Arafat/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Arafat/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Array.dir/flags.make

CMakeFiles/Array.dir/main.cpp.o: CMakeFiles/Array.dir/flags.make
CMakeFiles/Array.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Array.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Array.dir/main.cpp.o -c /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/main.cpp

CMakeFiles/Array.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Array.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/main.cpp > CMakeFiles/Array.dir/main.cpp.i

CMakeFiles/Array.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Array.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/main.cpp -o CMakeFiles/Array.dir/main.cpp.s

# Object files for target Array
Array_OBJECTS = \
"CMakeFiles/Array.dir/main.cpp.o"

# External object files for target Array
Array_EXTERNAL_OBJECTS =

Array.exe: CMakeFiles/Array.dir/main.cpp.o
Array.exe: CMakeFiles/Array.dir/build.make
Array.exe: CMakeFiles/Array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Array.dir/build: Array.exe

.PHONY : CMakeFiles/Array.dir/build

CMakeFiles/Array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Array.dir/clean

CMakeFiles/Array.dir/depend:
	cd /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug /cygdrive/c/Users/Arafat/Desktop/Leetcode/data/Array/cmake-build-debug/CMakeFiles/Array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Array.dir/depend

