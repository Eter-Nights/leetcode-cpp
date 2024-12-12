//
// Created by likun on 2024/8/9.
//
#include "gtest/gtest.h"
#include "solution.h"

int numJewelsInStones(string jewels, string stones) {
    set<char> res;
    for (char jewel : jewels) {
        res.insert(jewel);
    }

    int cnt = 0;
    for(char stone : stones) {
        if (res.find(stone) != res.end()) {
            cnt++;
        }
    }
    return cnt;
}


TEST(No771, Case1) {
    string jewels = "aA", stones = "aAAbbbb";
    int result = 3;
    EXPECT_EQ(numJewelsInStones(jewels, stones), result);
}