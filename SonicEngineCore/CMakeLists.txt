cmake_minimum_required(VERSION 3.31)
set(PROJECT_NAME SonicEngineCore)
project(${PROJECT_NAME})

set(SONIC_SOURCES src/SonicEngineCore/application.cpp)
set(SONIC_INCLUDES includes/SonicEngineCore/application.h)

add_library(SonicEngine STATIC ${SONIC_SOURCES} ${SONIC_INCLUDES})

set_target_properties(SonicEngine PROPERTIES
						ARCHIVE_OUTPUT_DIRECTORY
						${CMAKE_BINARY_DIR}/bin/SonicEngine)