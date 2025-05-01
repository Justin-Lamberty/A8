cmake_minimum_required(VERSION 3.10)
project(builder_app)

set(CMAKE_CXX_STANDARD 17)

include_directories(../include)

add_executable(builder_test
    ../src/carbuilder.cpp
    ../src/manualbuilder.cpp
    ../src/director.cpp
    ../src/clientcode.cpp
    ../tests/test.cpp
)

target_include_directories(builder_test PRIVATE ${CATCH2_INCLUDE_DIR})
