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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MoveZeros.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MoveZeros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MoveZeros.dir/flags.make

CMakeFiles/MoveZeros.dir/main.cpp.o: CMakeFiles/MoveZeros.dir/flags.make
CMakeFiles/MoveZeros.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MoveZeros.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MoveZeros.dir/main.cpp.o -c /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/main.cpp

CMakeFiles/MoveZeros.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MoveZeros.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/main.cpp > CMakeFiles/MoveZeros.dir/main.cpp.i

CMakeFiles/MoveZeros.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MoveZeros.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/main.cpp -o CMakeFiles/MoveZeros.dir/main.cpp.s

# Object files for target MoveZeros
MoveZeros_OBJECTS = \
"CMakeFiles/MoveZeros.dir/main.cpp.o"

# External object files for target MoveZeros
MoveZeros_EXTERNAL_OBJECTS =

MoveZeros.exe: CMakeFiles/MoveZeros.dir/main.cpp.o
MoveZeros.exe: CMakeFiles/MoveZeros.dir/build.make
MoveZeros.exe: CMakeFiles/MoveZeros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MoveZeros.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MoveZeros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MoveZeros.dir/build: MoveZeros.exe

.PHONY : CMakeFiles/MoveZeros.dir/build

CMakeFiles/MoveZeros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MoveZeros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MoveZeros.dir/clean

CMakeFiles/MoveZeros.dir/depend:
	cd /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug /cygdrive/c/Users/Arafat/Desktop/Leetcode/MoveZeros/cmake-build-debug/CMakeFiles/MoveZeros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MoveZeros.dir/depend

