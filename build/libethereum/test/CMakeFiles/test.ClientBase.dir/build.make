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

# Utility rule file for test.ClientBase.

# Include the progress variables for this target.
include libethereum/test/CMakeFiles/test.ClientBase.dir/progress.make

libethereum/test/CMakeFiles/test.ClientBase: libethereum/test/testeth
	cd /home/tzunami/git/farmer/build/libethereum/test && /usr/bin/cmake -DETH_TEST_NAME="ClientBase" -DCTEST_COMMAND="/usr/bin/ctest" -P /home/tzunami/git/farmer/webthree-helpers/cmake/scripts/runtest.cmake

test.ClientBase: libethereum/test/CMakeFiles/test.ClientBase
test.ClientBase: libethereum/test/CMakeFiles/test.ClientBase.dir/build.make
.PHONY : test.ClientBase

# Rule to build all files generated by this target.
libethereum/test/CMakeFiles/test.ClientBase.dir/build: test.ClientBase
.PHONY : libethereum/test/CMakeFiles/test.ClientBase.dir/build

libethereum/test/CMakeFiles/test.ClientBase.dir/clean:
	cd /home/tzunami/git/farmer/build/libethereum/test && $(CMAKE_COMMAND) -P CMakeFiles/test.ClientBase.dir/cmake_clean.cmake
.PHONY : libethereum/test/CMakeFiles/test.ClientBase.dir/clean

libethereum/test/CMakeFiles/test.ClientBase.dir/depend:
	cd /home/tzunami/git/farmer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tzunami/git/farmer /home/tzunami/git/farmer/libethereum/test /home/tzunami/git/farmer/build /home/tzunami/git/farmer/build/libethereum/test /home/tzunami/git/farmer/build/libethereum/test/CMakeFiles/test.ClientBase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libethereum/test/CMakeFiles/test.ClientBase.dir/depend
