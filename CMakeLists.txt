cmake_minimum_required(VERSION 4.3.2)
project(TestingCTest)

include(CTest)
enable_testing()

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/tests")

add_executable(${PROJECT_NAME} tests/test_main.cpp)
# add_executable(${PROJECT_NAME} test_main.cpp)

# add_test(NAME Test_0 COMMAND "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" 0)

add_test(NAME Test_0
    COMMAND $<TARGET_FILE:${PROJECT_NAME}> 0
)