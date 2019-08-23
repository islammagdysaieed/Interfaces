cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)


set(HEADER_FILES include/pot/stack.h)

set(SOURCE_FILES src/pot/stack.c)

add_library(pot ${HEADER_FILES} ${SOURCE_FILES})


source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${HEADER_FILES})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

# list include directories
target_include_directories(pot
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src
)
