add_library(test_lib STATIC math_functions.cpp)
add_executable(test_project main.cpp)
target_link_libraries(test_project test_lib)
