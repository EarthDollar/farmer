# Install script for directory: /home/tzunami/git/farmer/libweb3core/libdevcore

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/libweb3core/libdevcore/libdevcore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdevcore.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/devcore" TYPE FILE FILES
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Terminal.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/CommonIO.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/CommonJS.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/MemoryDB.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/OverlayDB.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/FixedHash.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/UndefMacros.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/TransientDirectory.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/vector_ref.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/CommonData.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Base64.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/SHA3.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Hash.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Exceptions.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/FileSystem.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/RangeMask.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/TrieCommon.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Worker.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Guards.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Common.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Base58.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Log.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/db.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Diff.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/TrieDB.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/RLP.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/TrieHash.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/concurrent_queue.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/debugbreak.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/Assertions.h"
    "/home/tzunami/git/farmer/libweb3core/libdevcore/picosha2.h"
    )
endif()

