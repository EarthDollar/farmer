# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/tzunami/git/farmer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tzunami/git/farmer/build

# Utility rule file for alethzero_BuildInfo.h.

# Include the progress variables for this target.
include alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/progress.make

alethzero/CMakeFiles/alethzero_BuildInfo.h:
	cd /home/tzunami/git/farmer/alethzero && /usr/bin/cmake -DETH_SOURCE_DIR="/home/tzunami/git/farmer/alethzero" -DETH_BUILDINFO_IN="/home/tzunami/git/farmer/webthree-helpers/cmake/templates/BuildInfo.h.in" -DETH_DST_DIR="/home/tzunami/git/farmer/build/alethzero/include/alethzero" -DETH_CMAKE_DIR="/home/tzunami/git/farmer/webthree-helpers/cmake" -DETH_BUILD_TYPE="RelWithDebInfo" -DETH_BUILD_OS="Linux" -DETH_BUILD_COMPILER="g++" -DETH_BUILD_JIT_MODE="Interpreter" -DETH_BUILD_PLATFORM="Linux/g++/Interpreter" -DETH_BUILD_NUMBER="65535" -DETH_VERSION_SUFFIX="" -DPROJECT_VERSION="1.2.9" -DETH_FATDB="" -P /home/tzunami/git/farmer/webthree-helpers/cmake/scripts/buildinfo.cmake

alethzero_BuildInfo.h: alethzero/CMakeFiles/alethzero_BuildInfo.h
alethzero_BuildInfo.h: alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/build.make
.PHONY : alethzero_BuildInfo.h

# Rule to build all files generated by this target.
alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/build: alethzero_BuildInfo.h
.PHONY : alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/build

alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/clean:
	cd /home/tzunami/git/farmer/build/alethzero && $(CMAKE_COMMAND) -P CMakeFiles/alethzero_BuildInfo.h.dir/cmake_clean.cmake
.PHONY : alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/clean

alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/depend:
	cd /home/tzunami/git/farmer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tzunami/git/farmer /home/tzunami/git/farmer/alethzero /home/tzunami/git/farmer/build /home/tzunami/git/farmer/build/alethzero /home/tzunami/git/farmer/build/alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : alethzero/CMakeFiles/alethzero_BuildInfo.h.dir/depend

