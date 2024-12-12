//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

bool divisorGame(int n) {
    return n % 2 == 0;
}


TEST(No1025, Case1) {
    int n = 3;
    bool result = false;
    EXPECT_EQ(divisorGame(n), result);
}