add_library(test_lib STATIC math_functions.cpp)
add_executable(RUN_TEST_PROJECT main.cpp)
target_link_libraries(RUN_TEST_PROJECT test_lib)
