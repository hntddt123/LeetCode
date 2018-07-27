//
//  main.cpp
//  AddTwoNumbers
//
//  Created by Nientai Ho on 2018/6/6.
//  Copyright © 2018年 HNTStudio. All rights reserved.
/*
 You are given two non-empty linked lists representing two non-negative integers.
 The digits are stored in reverse order and each of their nodes contain a single digit.
 Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 */

#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode *next;
    ListNode(int x) : value(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode(1);
        return node;
    }
};

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
