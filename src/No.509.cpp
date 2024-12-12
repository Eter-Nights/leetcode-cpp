//
// Created by likun on 2024/8/9.
//
#include "gtest/gtest.h"
#include "solution.h"

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}


TEST(No509, Case1) {
    int n  = 4;
    int result = 3;
    EXPECT_EQ(fib(n), result);
}