//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    if (dividend == INT_MIN && divisor == 1) return INT_MIN;
    if (dividend > 0) return -divide(-dividend, divisor);
    if (divisor > 0) return -divide(dividend, -divisor);
    if (dividend > divisor) return 0;

    int res = 1, tmp = divisor;
    while(dividend - tmp <= tmp) {
        res += res;
        tmp += tmp;
    }
    return res + divide(dividend - tmp, divisor);
}


TEST(No29, Case1) {
    int dividend = 101, divisor = 5;
    int result = 20;
    EXPECT_EQ(divide(dividend, divisor), result);
}