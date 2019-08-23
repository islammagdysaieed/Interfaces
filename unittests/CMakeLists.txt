cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

add_executable(unittests src/main.c)


target_link_libraries(unittests
	PRIVATE 
 		pot
 )
