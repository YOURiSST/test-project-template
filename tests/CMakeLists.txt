include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(TEST_MATH test_math_functions.cpp)
target_link_libraries(TEST_MATH test_lib gtest gtest_main)
add_test(NAME MathFunctionsTest COMMAND TEST_MATH)