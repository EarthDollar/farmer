# Install script for directory: /home/tzunami/git/farmer/solidity/libsolidity

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tzunami/git/farmer/build/solidity/libsolidity/libsolidity.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsolidity.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/solidity" TYPE FILE FILES
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//AST_accept.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTVisitor.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTPrinter.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//AST.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTJsonConverter.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTAnnotations.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTUtils.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//ASTForward.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/ast//Types.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/formal//Why3Translator.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/inlineasm//AsmStack.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/inlineasm//AsmCodeGen.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/inlineasm//AsmData.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/inlineasm//AsmParser.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//Version.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//Exceptions.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//InterfaceHandler.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//Utils.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//SourceReferenceFormatter.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//GasEstimator.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/interface//CompilerStack.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//ArrayUtils.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//ContractCompiler.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//CompilerUtils.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//CompilerContext.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//ExpressionCompiler.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//LValue.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/codegen//Compiler.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/parsing//DocStringParser.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/parsing//Scanner.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/parsing//Token.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/parsing//Parser.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/parsing//ParserBase.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//DeclarationContainer.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//ReferencesResolver.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//TypeChecker.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//NameAndTypeResolver.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//ConstantEvaluator.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//DocStringAnalyser.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//SyntaxChecker.h"
    "/home/tzunami/git/farmer/solidity/libsolidity/analysis//GlobalContext.h"
    )
endif()

