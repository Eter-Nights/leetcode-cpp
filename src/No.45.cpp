//
// Created by likun on 2024/8/8.
//
#include "gtest/gtest.h"
#include "solution.h"

int jump(vector<int>& nums) {
    int maxPos = 0;
    int end = 0;
    int cnt = 0;

    for (int i = 0; i < nums.size() - 1;i++){
        maxPos = std::max(maxPos, i + nums[i]);
        if (i == end) {
            end = maxPos;
            cnt++;
        }
    }

    return cnt;
}


TEST(No45, Case1) {
    vector<int> nums = {2,3,1,1,4};
    int result = 2;
    EXPECT_EQ(jump(nums), result);
}
