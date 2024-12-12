//
// Created by likun on 2024/8/10.
//
#include "gtest/gtest.h"
#include "solution.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    set<ListNode *> res;

    while (head != nullptr) {
        if (res.find(head) == res.end()) {
            res.insert(head);
            head = head->next;
        } else {
            return true;
        }
    }
    return false;
}

TEST(No141, Case1) {
    ListNode head(3);

    bool result = false;
    EXPECT_EQ(hasCycle(&head), result);
}