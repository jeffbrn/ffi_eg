cmake_minimum_required( VERSION 3.22 )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(EXE_NAME "cpp-test")

set(PROJECT_PATH "${CMAKE_CURRENT_SOURCE_DIR}")

project(${EXE_NAME} VERSION 1.0 LANGUAGES CXX DESCRIPTION "Test project")

add_subdirectory(src)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC cpp_test_lib )
