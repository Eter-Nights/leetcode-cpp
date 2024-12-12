//
// Created by likun on 2024/8/9.
//
#include "gtest/gtest.h"
#include "solution.h"

string removeDuplicates(string s) {
    string res;
    for (auto tmp : s) {
        if (res.empty()) {
            res += tmp;
        } else if (res.back() == tmp) {
            res.pop_back();
        } else {
            res += tmp;
        }
    }
    return res;
}


TEST(No1047, Case1) {
    string s = "abbaca";
    string result = "ca";
    EXPECT_EQ(removeDuplicates(s), result);
}