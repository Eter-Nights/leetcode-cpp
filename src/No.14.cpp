//
// Created by likun on 2024/8/8.
//

#include "gtest/gtest.h"
#include "solution.h"

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return string();
    }

    sort(strs.begin(), strs.end());

    string st = strs.front(), en = strs.back();

    int length = std::min(st.size(), en.size());

    int i;
    for (i = 0; i < length && st[i] == en[i]; i++);

    return string(st, 0, i);
}


TEST(No14, Case1) {
    vector<string> strs = {"flower","flow","flight"};
    string result = "fl";
    EXPECT_EQ(longestCommonPrefix(strs), result);
}