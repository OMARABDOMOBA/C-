# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roboticscorner/C++/project/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roboticscorner/C++/project/cmake/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/wifi_lib.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/wifi_lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/wifi_lib.dir/flags.make

lib/CMakeFiles/wifi_lib.dir/wifi.cpp.o: lib/CMakeFiles/wifi_lib.dir/flags.make
lib/CMakeFiles/wifi_lib.dir/wifi.cpp.o: ../lib/wifi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roboticscorner/C++/project/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/wifi_lib.dir/wifi.cpp.o"
	cd /home/roboticscorner/C++/project/cmake/build/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wifi_lib.dir/wifi.cpp.o -c /home/roboticscorner/C++/project/cmake/lib/wifi.cpp

lib/CMakeFiles/wifi_lib.dir/wifi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wifi_lib.dir/wifi.cpp.i"
	cd /home/roboticscorner/C++/project/cmake/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roboticscorner/C++/project/cmake/lib/wifi.cpp > CMakeFiles/wifi_lib.dir/wifi.cpp.i

lib/CMakeFiles/wifi_lib.dir/wifi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wifi_lib.dir/wifi.cpp.s"
	cd /home/roboticscorner/C++/project/cmake/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roboticscorner/C++/project/cmake/lib/wifi.cpp -o CMakeFiles/wifi_lib.dir/wifi.cpp.s

# Object files for target wifi_lib
wifi_lib_OBJECTS = \
"CMakeFiles/wifi_lib.dir/wifi.cpp.o"

# External object files for target wifi_lib
wifi_lib_EXTERNAL_OBJECTS =

lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/wifi.cpp.o
lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/build.make
lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roboticscorner/C++/project/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libwifi_lib.a"
	cd /home/roboticscorner/C++/project/cmake/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/wifi_lib.dir/cmake_clean_target.cmake
	cd /home/roboticscorner/C++/project/cmake/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wifi_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/wifi_lib.dir/build: lib/libwifi_lib.a

.PHONY : lib/CMakeFiles/wifi_lib.dir/build

lib/CMakeFiles/wifi_lib.dir/clean:
	cd /home/roboticscorner/C++/project/cmake/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/wifi_lib.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/wifi_lib.dir/clean

lib/CMakeFiles/wifi_lib.dir/depend:
	cd /home/roboticscorner/C++/project/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roboticscorner/C++/project/cmake /home/roboticscorner/C++/project/cmake/lib /home/roboticscorner/C++/project/cmake/build /home/roboticscorner/C++/project/cmake/build/lib /home/roboticscorner/C++/project/cmake/build/lib/CMakeFiles/wifi_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/wifi_lib.dir/depend

