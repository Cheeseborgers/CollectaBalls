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
include CMakeFiles/balls.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/balls.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/balls.dir/flags.make

CMakeFiles/balls.dir/main.cpp.o: CMakeFiles/balls.dir/flags.make
CMakeFiles/balls.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/balls.dir/main.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/balls.dir/main.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp

CMakeFiles/balls.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/balls.dir/main.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp > CMakeFiles/balls.dir/main.cpp.i

CMakeFiles/balls.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/balls.dir/main.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/main.cpp -o CMakeFiles/balls.dir/main.cpp.s

CMakeFiles/balls.dir/Game.cpp.o: CMakeFiles/balls.dir/flags.make
CMakeFiles/balls.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/balls.dir/Game.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/balls.dir/Game.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp

CMakeFiles/balls.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/balls.dir/Game.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp > CMakeFiles/balls.dir/Game.cpp.i

CMakeFiles/balls.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/balls.dir/Game.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Game.cpp -o CMakeFiles/balls.dir/Game.cpp.s

CMakeFiles/balls.dir/Player.cpp.o: CMakeFiles/balls.dir/flags.make
CMakeFiles/balls.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/balls.dir/Player.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/balls.dir/Player.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp

CMakeFiles/balls.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/balls.dir/Player.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp > CMakeFiles/balls.dir/Player.cpp.i

CMakeFiles/balls.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/balls.dir/Player.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Player.cpp -o CMakeFiles/balls.dir/Player.cpp.s

CMakeFiles/balls.dir/Ball.cpp.o: CMakeFiles/balls.dir/flags.make
CMakeFiles/balls.dir/Ball.cpp.o: ../Ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/balls.dir/Ball.cpp.o"
	/usr/local/gcc-9.3/bin/g++-9.3  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/balls.dir/Ball.cpp.o -c /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp

CMakeFiles/balls.dir/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/balls.dir/Ball.cpp.i"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp > CMakeFiles/balls.dir/Ball.cpp.i

CMakeFiles/balls.dir/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/balls.dir/Ball.cpp.s"
	/usr/local/gcc-9.3/bin/g++-9.3 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fason/dev/c_plus_plus/CMake/collectaballs/Ball.cpp -o CMakeFiles/balls.dir/Ball.cpp.s

# Object files for target balls
balls_OBJECTS = \
"CMakeFiles/balls.dir/main.cpp.o" \
"CMakeFiles/balls.dir/Game.cpp.o" \
"CMakeFiles/balls.dir/Player.cpp.o" \
"CMakeFiles/balls.dir/Ball.cpp.o"

# External object files for target balls
balls_EXTERNAL_OBJECTS =

balls: CMakeFiles/balls.dir/main.cpp.o
balls: CMakeFiles/balls.dir/Game.cpp.o
balls: CMakeFiles/balls.dir/Player.cpp.o
balls: CMakeFiles/balls.dir/Ball.cpp.o
balls: CMakeFiles/balls.dir/build.make
balls: include/SFML/lib/libsfml-graphics-d.so.2.5.1
balls: include/SFML/lib/libsfml-window-d.so.2.5.1
balls: include/SFML/lib/libsfml-system-d.so.2.5.1
balls: CMakeFiles/balls.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable balls"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/balls.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/balls.dir/build: balls

.PHONY : CMakeFiles/balls.dir/build

CMakeFiles/balls.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/balls.dir/cmake_clean.cmake
.PHONY : CMakeFiles/balls.dir/clean

CMakeFiles/balls.dir/depend:
	cd /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fason/dev/c_plus_plus/CMake/collectaballs /home/fason/dev/c_plus_plus/CMake/collectaballs /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug /home/fason/dev/c_plus_plus/CMake/collectaballs/cmake-build-debug/CMakeFiles/balls.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/balls.dir/depend

