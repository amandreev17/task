#include "3Sum.cpp"
#include <vector>
#include <gtest/gtest.h>
#include "gmock/gmock.h"

TEST(ThreeSum, sum) {
    std::vector<int> s = {1, 2, 3};
    EXPECT_EQ(6, 6);
}


TEST(ThreeSum, isSumZero) {
    std::vector<int> s = {1, 2, -3};
    EXPECT_TRUE(isSumZero(s));
}

