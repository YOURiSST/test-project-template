#include <gtest/gtest.h>
#include "test_project/math_functions.hpp"

TEST(MathFunctionsTest, AddPositiveNumbers) {
    EXPECT_EQ(test_project::add(2, 3), 5);
    EXPECT_EQ(test_project::add(10, 15), 25);
}

TEST(MathFunctionsTest, AddNegativeNumbers) {
    EXPECT_EQ(test_project::add(-2, -3), -5);
    EXPECT_EQ(test_project::add(-10, -15), -25);
}

TEST(MathFunctionsTest, AddPositiveAndNegativeNumbers) {
    EXPECT_EQ(test_project::add(2, -3), -1);
    EXPECT_EQ(test_project::add(-10, 5), -5);
}

TEST(MathFunctionsTest, AddZero) {
    EXPECT_EQ(test_project::add(0, 0), 0);
    EXPECT_EQ(test_project::add(5, 0), 5);
    EXPECT_EQ(test_project::add(0, 5), 5);
}

TEST(MathFunctionsTest, AddLargeNumbers) {
    EXPECT_EQ(test_project::add(1000000, 2000000), 3000000);
    EXPECT_EQ(test_project::add(-1000000, 2000000), 1000000);
}

TEST(MathFunctionsTest, subPositiveNumbers) {
    EXPECT_EQ(test_project::sub(5, 3), 2);
    EXPECT_EQ(test_project::sub(20, 15), 5);
}

TEST(MathFunctionsTest, subNegativeNumbers) {
    EXPECT_EQ(test_project::sub(-5, -3), -2);
    EXPECT_EQ(test_project::sub(-10, -5), -5);
}

TEST(MathFunctionsTest, subPositiveAndNegativeNumbers) {
    EXPECT_EQ(test_project::sub(5, -3), 8);
    EXPECT_EQ(test_project::sub(-10, 5), -15);
}

TEST(MathFunctionsTest, subZero) {
    EXPECT_EQ(test_project::sub(5, 0), 5);
    EXPECT_EQ(test_project::sub(0, 5), -5);
    EXPECT_EQ(test_project::sub(0, 0), 0);
}

TEST(MathFunctionsTest, subLargeNumbers) {
    EXPECT_EQ(test_project::sub(1000000, 500000), 500000);
    EXPECT_EQ(test_project::sub(-1000000, 500000), -1500000);
}
