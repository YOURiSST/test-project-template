add_library(test_lib STATIC math_functions.cpp)
add_executable(TEST_PROJECT main.cpp)
target_link_libraries(TEST_PROJECT test_lib)
