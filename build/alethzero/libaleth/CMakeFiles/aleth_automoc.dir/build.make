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

# Utility rule file for aleth_automoc.

# Include the progress variables for this target.
include alethzero/libaleth/CMakeFiles/aleth_automoc.dir/progress.make

alethzero/libaleth/CMakeFiles/aleth_automoc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tzunami/git/farmer/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Automatic moc and uic for target aleth"
	cd /home/tzunami/git/farmer/build/alethzero/libaleth && /usr/bin/cmake -E cmake_autogen /home/tzunami/git/farmer/build/alethzero/libaleth/CMakeFiles/aleth_automoc.dir/ RelWithDebInfo

aleth_automoc: alethzero/libaleth/CMakeFiles/aleth_automoc
aleth_automoc: alethzero/libaleth/CMakeFiles/aleth_automoc.dir/build.make
.PHONY : aleth_automoc

# Rule to build all files generated by this target.
alethzero/libaleth/CMakeFiles/aleth_automoc.dir/build: aleth_automoc
.PHONY : alethzero/libaleth/CMakeFiles/aleth_automoc.dir/build

alethzero/libaleth/CMakeFiles/aleth_automoc.dir/clean:
	cd /home/tzunami/git/farmer/build/alethzero/libaleth && $(CMAKE_COMMAND) -P CMakeFiles/aleth_automoc.dir/cmake_clean.cmake
.PHONY : alethzero/libaleth/CMakeFiles/aleth_automoc.dir/clean

alethzero/libaleth/CMakeFiles/aleth_automoc.dir/depend:
	cd /home/tzunami/git/farmer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tzunami/git/farmer /home/tzunami/git/farmer/alethzero/libaleth /home/tzunami/git/farmer/build /home/tzunami/git/farmer/build/alethzero/libaleth /home/tzunami/git/farmer/build/alethzero/libaleth/CMakeFiles/aleth_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : alethzero/libaleth/CMakeFiles/aleth_automoc.dir/depend

