cmake_minimum_required(VERSION 3.31)
set(PROJECT_NAME SonicEngineEditor)
project(${PROJECT_NAME})

set(EDITOR_SOURCE src/main.cpp)

add_executable(${PROJECT_NAME} ${EDITOR_SOURCE})

set_target_properties(${PROJECT_NAME} PROPERTIES
					RUNTIME_OUTPUT_DIRECTORY
					${CMAKE_BINARY_DIR}/bin/Editor)