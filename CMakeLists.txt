cmake_minimum_required(VERSION 3.10.0)
project(TestingCTest)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

add_executable(${PROJECT_NAME} tests/test_main.cpp)

add_test(NAME Test_0 COMMAND "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" 0)
