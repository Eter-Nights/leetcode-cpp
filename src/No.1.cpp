//
// Created by likun on 2024/8/8.
//
#include "gtest/gtest.h"
#include "solution.h"

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> res;

    for(int i = 0; i < nums.size(); i++) {
        auto it = res.find(target - nums[i]);
        if (it != res.end()) {
            return {it->second, i};
        } else {
            res[nums[i]] = i;
        }
    }
    return {};
}


TEST(No1, Case1) {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = {0, 1};
    EXPECT_EQ(twoSum(nums, target), result);
}

