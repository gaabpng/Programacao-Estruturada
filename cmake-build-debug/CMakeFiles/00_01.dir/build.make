# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /snap/clion/296/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/296/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gaab/Programacao-Estruturada

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaab/Programacao-Estruturada/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/00_01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/00_01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/00_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/00_01.dir/flags.make

CMakeFiles/00_01.dir/Lista0/PE_01.c.o: CMakeFiles/00_01.dir/flags.make
CMakeFiles/00_01.dir/Lista0/PE_01.c.o: /home/gaab/Programacao-Estruturada/Lista0/PE_01.c
CMakeFiles/00_01.dir/Lista0/PE_01.c.o: CMakeFiles/00_01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/gaab/Programacao-Estruturada/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/00_01.dir/Lista0/PE_01.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/00_01.dir/Lista0/PE_01.c.o -MF CMakeFiles/00_01.dir/Lista0/PE_01.c.o.d -o CMakeFiles/00_01.dir/Lista0/PE_01.c.o -c /home/gaab/Programacao-Estruturada/Lista0/PE_01.c

CMakeFiles/00_01.dir/Lista0/PE_01.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/00_01.dir/Lista0/PE_01.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/gaab/Programacao-Estruturada/Lista0/PE_01.c > CMakeFiles/00_01.dir/Lista0/PE_01.c.i

CMakeFiles/00_01.dir/Lista0/PE_01.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/00_01.dir/Lista0/PE_01.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/gaab/Programacao-Estruturada/Lista0/PE_01.c -o CMakeFiles/00_01.dir/Lista0/PE_01.c.s

# Object files for target 00_01
00_01_OBJECTS = \
"CMakeFiles/00_01.dir/Lista0/PE_01.c.o"

# External object files for target 00_01
00_01_EXTERNAL_OBJECTS =

00_01: CMakeFiles/00_01.dir/Lista0/PE_01.c.o
00_01: CMakeFiles/00_01.dir/build.make
00_01: CMakeFiles/00_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/gaab/Programacao-Estruturada/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 00_01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/00_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/00_01.dir/build: 00_01
.PHONY : CMakeFiles/00_01.dir/build

CMakeFiles/00_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/00_01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/00_01.dir/clean

CMakeFiles/00_01.dir/depend:
	cd /home/gaab/Programacao-Estruturada/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaab/Programacao-Estruturada /home/gaab/Programacao-Estruturada /home/gaab/Programacao-Estruturada/cmake-build-debug /home/gaab/Programacao-Estruturada/cmake-build-debug /home/gaab/Programacao-Estruturada/cmake-build-debug/CMakeFiles/00_01.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/00_01.dir/depend

