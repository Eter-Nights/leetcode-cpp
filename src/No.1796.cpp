//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

int secondHighest(string s) {
    std::pair<char, char> res = {47, 47};
    for (auto c : s) {
        if (std::isdigit(c) && c > res.second) {

            if (c > res.first) {
                res.second = res.first;
                res.first = c;
            } else if (c == res.first){
                continue;
            } else {
                res.second = c;
            }
        }
    }
    return res.second - 48;
}


TEST(No1796, Case1) {
    string s = "sjhtz8344";
    int result = 4;
    EXPECT_EQ(secondHighest(s), result);
}