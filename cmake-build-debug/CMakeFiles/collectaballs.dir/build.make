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
CMAKE_COMMAND = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fason/dev/c_plus_plus/CMake/collectaballs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/collectaballs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/collectaballs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/collectaballs.dir/flags.make

CMakeFiles/collectaballs.dir/main.cpp.o: CMakeFiles/collectaballs.dir/flags.make
CMakeFiles/collectaballs.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/collectaballs.dir/main.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collectaballs.dir/main.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp

CMakeFiles/collectaballs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collectaballs.dir/main.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp > CMakeFiles/collectaballs.dir/main.cpp.i

CMakeFiles/collectaballs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collectaballs.dir/main.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp -o CMakeFiles/collectaballs.dir/main.cpp.s

CMakeFiles/collectaballs.dir/Game.cpp.o: CMakeFiles/collectaballs.dir/flags.make
CMakeFiles/collectaballs.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/collectaballs.dir/Game.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collectaballs.dir/Game.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp

CMakeFiles/collectaballs.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collectaballs.dir/Game.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp > CMakeFiles/collectaballs.dir/Game.cpp.i

CMakeFiles/collectaballs.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collectaballs.dir/Game.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp -o CMakeFiles/collectaballs.dir/Game.cpp.s

CMakeFiles/collectaballs.dir/Player.cpp.o: CMakeFiles/collectaballs.dir/flags.make
CMakeFiles/collectaballs.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/collectaballs.dir/Player.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collectaballs.dir/Player.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp

CMakeFiles/collectaballs.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collectaballs.dir/Player.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp > CMakeFiles/collectaballs.dir/Player.cpp.i

CMakeFiles/collectaballs.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collectaballs.dir/Player.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp -o CMakeFiles/collectaballs.dir/Player.cpp.s

CMakeFiles/collectaballs.dir/Ball.cpp.o: CMakeFiles/collectaballs.dir/flags.make
CMakeFiles/collectaballs.dir/Ball.cpp.o: ../Ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/collectaballs.dir/Ball.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collectaballs.dir/Ball.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp

CMakeFiles/collectaballs.dir/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collectaballs.dir/Ball.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp > CMakeFiles/collectaballs.dir/Ball.cpp.i

CMakeFiles/collectaballs.dir/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collectaballs.dir/Ball.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp -o CMakeFiles/collectaballs.dir/Ball.cpp.s

# Object files for target collectaballs
collectaballs_OBJECTS = \
"CMakeFiles/collectaballs.dir/main.cpp.o" \
"CMakeFiles/collectaballs.dir/Game.cpp.o" \
"CMakeFiles/collectaballs.dir/Player.cpp.o" \
"CMakeFiles/collectaballs.dir/Ball.cpp.o"

# External object files for target collectaballs
collectaballs_EXTERNAL_OBJECTS =

collectaballs: CMakeFiles/collectaballs.dir/main.cpp.o
collectaballs: CMakeFiles/collectaballs.dir/Game.cpp.o
collectaballs: CMakeFiles/collectaballs.dir/Player.cpp.o
collectaballs: CMakeFiles/collectaballs.dir/Ball.cpp.o
collectaballs: CMakeFiles/collectaballs.dir/build.make
collectaballs: include/SFML/lib/libsfml-graphics-d.so.2.5.1
collectaballs: include/SFML/lib/libsfml-window-d.so.2.5.1
collectaballs: include/SFML/lib/libsfml-system-d.so.2.5.1
collectaballs: CMakeFiles/collectaballs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable collectaballs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/collectaballs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/collectaballs.dir/build: collectaballs

.PHONY : CMakeFiles/collectaballs.dir/build

CMakeFiles/collectaballs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/collectaballs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/collectaballs.dir/clean

CMakeFiles/collectaballs.dir/depend:
	cd /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fason/dev/c_plus_plus/CMake/collectaballs /home/fason/dev/c_plus_plus/CMake/collectaballs /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles/collectaballs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/collectaballs.dir/depend
