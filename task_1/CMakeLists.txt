cmake_minimum_required(VERSION 3.22)
project(REF LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

set(SOURCE_F
	${PROJECT_SOURCE_DIR}/lib/shape.cpp
)

set(HEADER_F
	${PROJECT_SOURCE_DIR}/lib/shape.hpp
	${PROJECT_SOURCE_DIR}/lib/transform.hpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.cxx ${SOURCE_F} ${HEADER_F})
