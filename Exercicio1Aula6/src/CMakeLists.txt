cmake_minimum_required(VERSION 3.15)
project(exercicio6 CXX)

add_executable(exercicio6)

target_sources(
	exercicio6
	PRIVATE
		calculus.cpp
		calculus.hpp
		course.cpp
		course.hpp
		data_structures.cpp
		data_structures.hpp
		functions.cpp
		functions.hpp
		main.cpp
		student.cpp
		student.hpp
)