cmake_minimum_required(VERSION 3.15)

project(school_input CXX)

add_executable(school_input)

target_sources(
	school_input
	PRIVATE
		functions.cpp
		functions.hpp
		main.cpp
		student.cpp
		student.hpp
)