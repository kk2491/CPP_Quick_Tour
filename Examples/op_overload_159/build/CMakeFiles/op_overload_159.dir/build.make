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
CMAKE_SOURCE_DIR = /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build

# Include any dependencies generated for this target.
include CMakeFiles/op_overload_159.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/op_overload_159.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/op_overload_159.dir/flags.make

CMakeFiles/op_overload_159.dir/mystring.cpp.o: CMakeFiles/op_overload_159.dir/flags.make
CMakeFiles/op_overload_159.dir/mystring.cpp.o: ../mystring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/op_overload_159.dir/mystring.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/op_overload_159.dir/mystring.cpp.o -c /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/mystring.cpp

CMakeFiles/op_overload_159.dir/mystring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/op_overload_159.dir/mystring.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/mystring.cpp > CMakeFiles/op_overload_159.dir/mystring.cpp.i

CMakeFiles/op_overload_159.dir/mystring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/op_overload_159.dir/mystring.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/mystring.cpp -o CMakeFiles/op_overload_159.dir/mystring.cpp.s

CMakeFiles/op_overload_159.dir/mystring.cpp.o.requires:

.PHONY : CMakeFiles/op_overload_159.dir/mystring.cpp.o.requires

CMakeFiles/op_overload_159.dir/mystring.cpp.o.provides: CMakeFiles/op_overload_159.dir/mystring.cpp.o.requires
	$(MAKE) -f CMakeFiles/op_overload_159.dir/build.make CMakeFiles/op_overload_159.dir/mystring.cpp.o.provides.build
.PHONY : CMakeFiles/op_overload_159.dir/mystring.cpp.o.provides

CMakeFiles/op_overload_159.dir/mystring.cpp.o.provides.build: CMakeFiles/op_overload_159.dir/mystring.cpp.o


CMakeFiles/op_overload_159.dir/main.cpp.o: CMakeFiles/op_overload_159.dir/flags.make
CMakeFiles/op_overload_159.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/op_overload_159.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/op_overload_159.dir/main.cpp.o -c /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/main.cpp

CMakeFiles/op_overload_159.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/op_overload_159.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/main.cpp > CMakeFiles/op_overload_159.dir/main.cpp.i

CMakeFiles/op_overload_159.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/op_overload_159.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/main.cpp -o CMakeFiles/op_overload_159.dir/main.cpp.s

CMakeFiles/op_overload_159.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/op_overload_159.dir/main.cpp.o.requires

CMakeFiles/op_overload_159.dir/main.cpp.o.provides: CMakeFiles/op_overload_159.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/op_overload_159.dir/build.make CMakeFiles/op_overload_159.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/op_overload_159.dir/main.cpp.o.provides

CMakeFiles/op_overload_159.dir/main.cpp.o.provides.build: CMakeFiles/op_overload_159.dir/main.cpp.o


# Object files for target op_overload_159
op_overload_159_OBJECTS = \
"CMakeFiles/op_overload_159.dir/mystring.cpp.o" \
"CMakeFiles/op_overload_159.dir/main.cpp.o"

# External object files for target op_overload_159
op_overload_159_EXTERNAL_OBJECTS =

op_overload_159: CMakeFiles/op_overload_159.dir/mystring.cpp.o
op_overload_159: CMakeFiles/op_overload_159.dir/main.cpp.o
op_overload_159: CMakeFiles/op_overload_159.dir/build.make
op_overload_159: CMakeFiles/op_overload_159.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable op_overload_159"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/op_overload_159.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/op_overload_159.dir/build: op_overload_159

.PHONY : CMakeFiles/op_overload_159.dir/build

CMakeFiles/op_overload_159.dir/requires: CMakeFiles/op_overload_159.dir/mystring.cpp.o.requires
CMakeFiles/op_overload_159.dir/requires: CMakeFiles/op_overload_159.dir/main.cpp.o.requires

.PHONY : CMakeFiles/op_overload_159.dir/requires

CMakeFiles/op_overload_159.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/op_overload_159.dir/cmake_clean.cmake
.PHONY : CMakeFiles/op_overload_159.dir/clean

CMakeFiles/op_overload_159.dir/depend:
	cd /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159 /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159 /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build /home/kishor/GWM/Github_Repos/CPP_Quick_Tour/Udemy/op_overload_159/build/CMakeFiles/op_overload_159.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/op_overload_159.dir/depend

