cmake_minimum_required(VERSION 3.31)
set(PROJECT_NAME SonicEngine)
project(${PROJECT_NAME})

add_subdirectory(SonicEngineCore)
add_subdirectory(SonicEngineEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SonicEngineEditor)