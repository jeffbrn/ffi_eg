set(LIB_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
MESSAGE("LIB_PATH = ${LIB_PATH}")

file(GLOB_RECURSE  SOURCES ${LIB_PATH}/*.cpp)
set(SRC_FILES ${SOURCES})

add_library(cpp_test_lib STATIC ${SRC_FILES})
target_include_directories(cpp_test_lib PUBLIC ${LIB_PATH}/../include)
