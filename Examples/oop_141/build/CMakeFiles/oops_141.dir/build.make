# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build

# Include any dependencies generated for this target.
include CMakeFiles/oops_141.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oops_141.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oops_141.dir/flags.make

CMakeFiles/oops_141.dir/player.cpp.o: CMakeFiles/oops_141.dir/flags.make
CMakeFiles/oops_141.dir/player.cpp.o: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oops_141.dir/player.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oops_141.dir/player.cpp.o -c /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/player.cpp

CMakeFiles/oops_141.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oops_141.dir/player.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/player.cpp > CMakeFiles/oops_141.dir/player.cpp.i

CMakeFiles/oops_141.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oops_141.dir/player.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/player.cpp -o CMakeFiles/oops_141.dir/player.cpp.s

CMakeFiles/oops_141.dir/player.cpp.o.requires:

.PHONY : CMakeFiles/oops_141.dir/player.cpp.o.requires

CMakeFiles/oops_141.dir/player.cpp.o.provides: CMakeFiles/oops_141.dir/player.cpp.o.requires
	$(MAKE) -f CMakeFiles/oops_141.dir/build.make CMakeFiles/oops_141.dir/player.cpp.o.provides.build
.PHONY : CMakeFiles/oops_141.dir/player.cpp.o.provides

CMakeFiles/oops_141.dir/player.cpp.o.provides.build: CMakeFiles/oops_141.dir/player.cpp.o


CMakeFiles/oops_141.dir/main.cpp.o: CMakeFiles/oops_141.dir/flags.make
CMakeFiles/oops_141.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/oops_141.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oops_141.dir/main.cpp.o -c /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/main.cpp

CMakeFiles/oops_141.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oops_141.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/main.cpp > CMakeFiles/oops_141.dir/main.cpp.i

CMakeFiles/oops_141.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oops_141.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/main.cpp -o CMakeFiles/oops_141.dir/main.cpp.s

CMakeFiles/oops_141.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/oops_141.dir/main.cpp.o.requires

CMakeFiles/oops_141.dir/main.cpp.o.provides: CMakeFiles/oops_141.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/oops_141.dir/build.make CMakeFiles/oops_141.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/oops_141.dir/main.cpp.o.provides

CMakeFiles/oops_141.dir/main.cpp.o.provides.build: CMakeFiles/oops_141.dir/main.cpp.o


# Object files for target oops_141
oops_141_OBJECTS = \
"CMakeFiles/oops_141.dir/player.cpp.o" \
"CMakeFiles/oops_141.dir/main.cpp.o"

# External object files for target oops_141
oops_141_EXTERNAL_OBJECTS =

oops_141: CMakeFiles/oops_141.dir/player.cpp.o
oops_141: CMakeFiles/oops_141.dir/main.cpp.o
oops_141: CMakeFiles/oops_141.dir/build.make
oops_141: CMakeFiles/oops_141.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable oops_141"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oops_141.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oops_141.dir/build: oops_141

.PHONY : CMakeFiles/oops_141.dir/build

CMakeFiles/oops_141.dir/requires: CMakeFiles/oops_141.dir/player.cpp.o.requires
CMakeFiles/oops_141.dir/requires: CMakeFiles/oops_141.dir/main.cpp.o.requires

.PHONY : CMakeFiles/oops_141.dir/requires

CMakeFiles/oops_141.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oops_141.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oops_141.dir/clean

CMakeFiles/oops_141.dir/depend:
	cd /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141 /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141 /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/oop_141/build/CMakeFiles/oops_141.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oops_141.dir/depend

