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
CMAKE_SOURCE_DIR = /home/wandog/workspace/missile_related/ml-driver/userspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wandog/workspace/missile_related/ml-driver/userspace

# Include any dependencies generated for this target.
include CMakeFiles/Twrite.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Twrite.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Twrite.dir/flags.make

CMakeFiles/Twrite.dir/Twrite.c.o: CMakeFiles/Twrite.dir/flags.make
CMakeFiles/Twrite.dir/Twrite.c.o: Twrite.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wandog/workspace/missile_related/ml-driver/userspace/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Twrite.dir/Twrite.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Twrite.dir/Twrite.c.o   -c /home/wandog/workspace/missile_related/ml-driver/userspace/Twrite.c

CMakeFiles/Twrite.dir/Twrite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Twrite.dir/Twrite.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wandog/workspace/missile_related/ml-driver/userspace/Twrite.c > CMakeFiles/Twrite.dir/Twrite.c.i

CMakeFiles/Twrite.dir/Twrite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Twrite.dir/Twrite.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wandog/workspace/missile_related/ml-driver/userspace/Twrite.c -o CMakeFiles/Twrite.dir/Twrite.c.s

# Object files for target Twrite
Twrite_OBJECTS = \
"CMakeFiles/Twrite.dir/Twrite.c.o"

# External object files for target Twrite
Twrite_EXTERNAL_OBJECTS =

Twrite: CMakeFiles/Twrite.dir/Twrite.c.o
Twrite: CMakeFiles/Twrite.dir/build.make
Twrite: CMakeFiles/Twrite.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wandog/workspace/missile_related/ml-driver/userspace/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Twrite"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Twrite.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Twrite.dir/build: Twrite

.PHONY : CMakeFiles/Twrite.dir/build

CMakeFiles/Twrite.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Twrite.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Twrite.dir/clean

CMakeFiles/Twrite.dir/depend:
	cd /home/wandog/workspace/missile_related/ml-driver/userspace && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wandog/workspace/missile_related/ml-driver/userspace /home/wandog/workspace/missile_related/ml-driver/userspace /home/wandog/workspace/missile_related/ml-driver/userspace /home/wandog/workspace/missile_related/ml-driver/userspace /home/wandog/workspace/missile_related/ml-driver/userspace/CMakeFiles/Twrite.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Twrite.dir/depend

