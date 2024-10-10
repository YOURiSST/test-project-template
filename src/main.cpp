#include <iostream>
#include <test_project/math_functions.hpp>

int main() {
    int a = 5;
    int b = 3;

    std::cout << "hi!" << std::endl;

    std::cout << "adding a=" << a << " + b=" << b << " equals " << test_project::add(a, b) << std::endl;
    std::cout << "subtracting a=" << a << " - b=" << b << " equals " << test_project::sub(a, b) << std::endl;

    std::cout << "bye!" << std::endl;

    return 0;
}
