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

# Include any dependencies generated for this target.
include libethereum/libevm/CMakeFiles/evm.dir/depend.make

# Include the progress variables for this target.
include libethereum/libevm/CMakeFiles/evm.dir/progress.make

# Include the compile flags for this target's objects.
include libethereum/libevm/CMakeFiles/evm.dir/flags.make

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o: libethereum/libevm/CMakeFiles/evm.dir/flags.make
libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o: ../libethereum/libevm/ExtVMFace.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tzunami/git/farmer/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/evm.dir/ExtVMFace.cpp.o -c /home/tzunami/git/farmer/libethereum/libevm/ExtVMFace.cpp

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/evm.dir/ExtVMFace.cpp.i"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tzunami/git/farmer/libethereum/libevm/ExtVMFace.cpp > CMakeFiles/evm.dir/ExtVMFace.cpp.i

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/evm.dir/ExtVMFace.cpp.s"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tzunami/git/farmer/libethereum/libevm/ExtVMFace.cpp -o CMakeFiles/evm.dir/ExtVMFace.cpp.s

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.requires:
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.requires

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.provides: libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.requires
	$(MAKE) -f libethereum/libevm/CMakeFiles/evm.dir/build.make libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.provides.build
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.provides

libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.provides.build: libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o: libethereum/libevm/CMakeFiles/evm.dir/flags.make
libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o: ../libethereum/libevm/VM.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tzunami/git/farmer/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/evm.dir/VM.cpp.o -c /home/tzunami/git/farmer/libethereum/libevm/VM.cpp

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/evm.dir/VM.cpp.i"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tzunami/git/farmer/libethereum/libevm/VM.cpp > CMakeFiles/evm.dir/VM.cpp.i

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/evm.dir/VM.cpp.s"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tzunami/git/farmer/libethereum/libevm/VM.cpp -o CMakeFiles/evm.dir/VM.cpp.s

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.requires:
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.requires

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.provides: libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.requires
	$(MAKE) -f libethereum/libevm/CMakeFiles/evm.dir/build.make libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.provides.build
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.provides

libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.provides.build: libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o: libethereum/libevm/CMakeFiles/evm.dir/flags.make
libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o: ../libethereum/libevm/VMFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tzunami/git/farmer/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/evm.dir/VMFactory.cpp.o -c /home/tzunami/git/farmer/libethereum/libevm/VMFactory.cpp

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/evm.dir/VMFactory.cpp.i"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tzunami/git/farmer/libethereum/libevm/VMFactory.cpp > CMakeFiles/evm.dir/VMFactory.cpp.i

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/evm.dir/VMFactory.cpp.s"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tzunami/git/farmer/libethereum/libevm/VMFactory.cpp -o CMakeFiles/evm.dir/VMFactory.cpp.s

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.requires:
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.requires

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.provides: libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.requires
	$(MAKE) -f libethereum/libevm/CMakeFiles/evm.dir/build.make libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.provides.build
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.provides

libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.provides.build: libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o

# Object files for target evm
evm_OBJECTS = \
"CMakeFiles/evm.dir/ExtVMFace.cpp.o" \
"CMakeFiles/evm.dir/VM.cpp.o" \
"CMakeFiles/evm.dir/VMFactory.cpp.o"

# External object files for target evm
evm_EXTERNAL_OBJECTS =

libethereum/libevm/libevm.so: libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o
libethereum/libevm/libevm.so: libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o
libethereum/libevm/libevm.so: libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o
libethereum/libevm/libevm.so: libethereum/libevm/CMakeFiles/evm.dir/build.make
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libleveldb.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_random.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
libethereum/libevm/libevm.so: /usr/lib/libcryptopp.so
libethereum/libevm/libevm.so: webthree-helpers/utils/secp256k1/libsecp256k1.a
libethereum/libevm/libevm.so: libethereum/libethcore/libethcore.so
libethereum/libevm/libevm.so: libethereum/libevmcore/libevmcore.so
libethereum/libevm/libevm.so: libweb3core/libdevcrypto/libdevcrypto.so
libethereum/libevm/libevm.so: webthree-helpers/utils/libscrypt/libscrypt.so
libethereum/libevm/libevm.so: /usr/lib/libcryptopp.so
libethereum/libevm/libevm.so: webthree-helpers/utils/secp256k1/libsecp256k1.a
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libgmp.so
libethereum/libevm/libevm.so: libweb3core/libdevcore/libdevcore.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libleveldb.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_random.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
libethereum/libevm/libevm.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
libethereum/libevm/libevm.so: libethereum/libevm/CMakeFiles/evm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libevm.so"
	cd /home/tzunami/git/farmer/build/libethereum/libevm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/evm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libethereum/libevm/CMakeFiles/evm.dir/build: libethereum/libevm/libevm.so
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/build

libethereum/libevm/CMakeFiles/evm.dir/requires: libethereum/libevm/CMakeFiles/evm.dir/ExtVMFace.cpp.o.requires
libethereum/libevm/CMakeFiles/evm.dir/requires: libethereum/libevm/CMakeFiles/evm.dir/VM.cpp.o.requires
libethereum/libevm/CMakeFiles/evm.dir/requires: libethereum/libevm/CMakeFiles/evm.dir/VMFactory.cpp.o.requires
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/requires

libethereum/libevm/CMakeFiles/evm.dir/clean:
	cd /home/tzunami/git/farmer/build/libethereum/libevm && $(CMAKE_COMMAND) -P CMakeFiles/evm.dir/cmake_clean.cmake
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/clean

libethereum/libevm/CMakeFiles/evm.dir/depend:
	cd /home/tzunami/git/farmer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tzunami/git/farmer /home/tzunami/git/farmer/libethereum/libevm /home/tzunami/git/farmer/build /home/tzunami/git/farmer/build/libethereum/libevm /home/tzunami/git/farmer/build/libethereum/libevm/CMakeFiles/evm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libethereum/libevm/CMakeFiles/evm.dir/depend

