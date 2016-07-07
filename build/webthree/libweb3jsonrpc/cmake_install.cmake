# Install script for directory: /home/tzunami/git/farmer/webthree/libweb3jsonrpc

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/webthree/libweb3jsonrpc/libweb3jsonrpc.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libweb3jsonrpc.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/web3jsonrpc" TYPE FILE FILES
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Personal.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/EthFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/DebugFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Net.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Test.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminNetFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminEth.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Web3Face.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/IpcServerBase.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/IpcServer.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/TestFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/NetFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/SafeHttpServer.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/JsonHelper.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminNet.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Debug.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/PersonalFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminUtilsFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/WhisperFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/WinPipeServer.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminEthFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Bzz.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Web3.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/DBFace.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AdminUtils.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/LevelDB.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Whisper.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/AccountHolder.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/UnixSocketServer.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/Eth.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/ModularServer.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/SessionManager.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/MemoryDB.h"
    "/home/tzunami/git/farmer/webthree/libweb3jsonrpc/BzzFace.h"
    )
endif()

