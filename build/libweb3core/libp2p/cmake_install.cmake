# Install script for directory: /home/tzunami/git/farmer/libweb3core/libp2p

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/libweb3core/libp2p/libp2p.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libp2p.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/p2p" TYPE FILE FILES
    "/home/tzunami/git/farmer/libweb3core/libp2p/Capability.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXSocket.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXPacket.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/HostCapability.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/UPnP.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXFrameWriter.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/Peer.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXFrameCoder.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/Session.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXSocketIO.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/UDP.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPXFrameReader.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/Common.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/Network.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/Host.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/All.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/NodeTable.h"
    "/home/tzunami/git/farmer/libweb3core/libp2p/RLPxHandshake.h"
    )
endif()

