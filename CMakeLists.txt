cmake_minimum_required(VERSION 3.10)
project(BridgePattern)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(BridgeExample src/main.cpp src/abstraction.cpp src/implementor.cpp)
add_executable(BridgeTest src/test.cpp src/abstraction.cpp src/implementor.cpp)

enable_testing()
add_test(NAME BridgeTest COMMAND BridgeTest)
