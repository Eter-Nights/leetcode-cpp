//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

string makeGood(string s) {
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (res.empty()) {
            res.push_back(s[i]);
            continue;
        }

        char a = res.back(), b = s[i];
        if (a != b && std::tolower(a) == std::tolower(b)) {
            res.pop_back();
            continue;
        }

        res.push_back(b);
    }
    return res;
}


TEST(No1544, Case1) {
    string s = "leEeetcode";
    string result = "leetcode";
    EXPECT_EQ(makeGood(s), result);
}