# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ilya/CLionProjects/os_lab_05/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_syscall_link.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_syscall_link.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_syscall_link.dir/flags.make

CMakeFiles/lab_syscall_link.dir/main_syscall.c.o: CMakeFiles/lab_syscall_link.dir/flags.make
CMakeFiles/lab_syscall_link.dir/main_syscall.c.o: ../main_syscall.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab_syscall_link.dir/main_syscall.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab_syscall_link.dir/main_syscall.c.o   -c /home/ilya/CLionProjects/os_lab_05/src/main_syscall.c

CMakeFiles/lab_syscall_link.dir/main_syscall.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab_syscall_link.dir/main_syscall.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ilya/CLionProjects/os_lab_05/src/main_syscall.c > CMakeFiles/lab_syscall_link.dir/main_syscall.c.i

CMakeFiles/lab_syscall_link.dir/main_syscall.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab_syscall_link.dir/main_syscall.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ilya/CLionProjects/os_lab_05/src/main_syscall.c -o CMakeFiles/lab_syscall_link.dir/main_syscall.c.s

# Object files for target lab_syscall_link
lab_syscall_link_OBJECTS = \
"CMakeFiles/lab_syscall_link.dir/main_syscall.c.o"

# External object files for target lab_syscall_link
lab_syscall_link_EXTERNAL_OBJECTS =

lab_syscall_link: CMakeFiles/lab_syscall_link.dir/main_syscall.c.o
lab_syscall_link: CMakeFiles/lab_syscall_link.dir/build.make
lab_syscall_link: CMakeFiles/lab_syscall_link.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab_syscall_link"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_syscall_link.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_syscall_link.dir/build: lab_syscall_link

.PHONY : CMakeFiles/lab_syscall_link.dir/build

CMakeFiles/lab_syscall_link.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_syscall_link.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_syscall_link.dir/clean

CMakeFiles/lab_syscall_link.dir/depend:
	cd /home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ilya/CLionProjects/os_lab_05/src /home/ilya/CLionProjects/os_lab_05/src /home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug /home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug /home/ilya/CLionProjects/os_lab_05/src/cmake-build-debug/CMakeFiles/lab_syscall_link.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_syscall_link.dir/depend
