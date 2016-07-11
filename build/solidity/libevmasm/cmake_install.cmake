# Install script for directory: /home/tzunami/git/farmer/solidity/libevmasm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/solidity/libevmasm/libevmasm.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libevmasm.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/evmasm" TYPE FILE FILES
    "/home/tzunami/git/farmer/solidity/libevmasm/GasMeter.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/Instruction.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/ControlFlowGraph.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/KnownState.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/AssemblyItem.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/Assembly.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/LinkerObject.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/PathGasMeter.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/Exceptions.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/CommonSubexpressionEliminator.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/ConstantOptimiser.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/BlockDeduplicator.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/SemanticInformation.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/SourceLocation.h"
    "/home/tzunami/git/farmer/solidity/libevmasm/ExpressionClasses.h"
    )
endif()

