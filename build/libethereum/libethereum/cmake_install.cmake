# Install script for directory: /home/tzunami/git/farmer/libethereum/libethereum

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/libethereum/libethereum/libethereum.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libethereum.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ethereum" TYPE FILE FILES
    "/home/tzunami/git/farmer/libethereum/libethereum/ChainParams.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Utility.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/BlockQueue.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/GenericMiner.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Transaction.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/GenesisInfo.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/BlockDetails.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/VerifiedBlock.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/CachedAddressState.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Client.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/CommonNet.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/GasPricer.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/AccountDiff.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/BlockChain.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/TransactionReceipt.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/GenericFarm.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/BlockChainSync.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/LogFilter.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/EthereumPeer.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/ExtVM.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/TransactionQueue.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/All.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/MiningClient.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/EthereumHost.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Defaults.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Account.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/BasicGasPricer.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/ClientBase.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Executive.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/State.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Block.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/Interface.h"
    "/home/tzunami/git/farmer/libethereum/libethereum/ClientTest.h"
    )
endif()

