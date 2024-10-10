cmake_minimum_required(VERSION 3.10)

project(TEST_PROJECT VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

option(ENABLE_TESTING "Enable testing" ON)

if(ENABLE_TESTING)
    enable_testing()
    add_subdirectory(third_party/googletest)
    add_subdirectory(tests)
endif()
