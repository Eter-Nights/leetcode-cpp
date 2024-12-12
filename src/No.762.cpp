//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

int countPrimeSetBits(int left, int right) {
    set<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    int res = 0;
    for (int i = left; i <= right; i++) {
        int cnt = __builtin_popcount(i);
        if (prime.find(cnt) != prime.end()) {
            res++;
        }
    }
    return res;
}


TEST(No762, Case1) {
    int left = 6, right = 10;
    int result = 4;
    EXPECT_EQ(countPrimeSetBits(left, right), result);
}