aux_source_directory(. SRC_LIST)

set(EXECUTABLE rlp)

add_executable(${EXECUTABLE} ${SRC_LIST})

eth_use(${EXECUTABLE} REQUIRED Dev::devcrypto)

if (APPLE)
	install(TARGETS ${EXECUTABLE} DESTINATION bin)
else()
	ed_install_executable(${EXECUTABLE})
endif()

