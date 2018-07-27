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
 (0-9) + (0-9)
 c   1
   342
 + 465
 = 708
 reverse = 807
 carry 1
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

void printList(ListNode *node);

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode* resultHead = new ListNode(0);
        ListNode* temp = resultHead;
        int carry = 0;
        while (list1 != nullptr || list2 != nullptr) {
            int value1 = 0;
            int value2 = 0;
            if (list1 != nullptr) {
                value1 = list1->value;
            }
            if (list2 != nullptr) {
                value2 = list2->value;
            }
            int sum = value1 + value2 + carry;
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            if (list1 != nullptr) list1 = list1->next;
            if (list2 != nullptr) list2 = list2->next;
        }
        if (carry > 0) {
            temp->next = new ListNode(carry);
        }
        return resultHead->next;
    }
    
};


int main(int argc, const char * argv[]) {
    Solution s = Solution();
    //Linked list operation here
    ListNode node1(3);
    ListNode node2(4);
    ListNode node3(2);
    
    node1.next = &node2;
    //node2.next = &node3;
    
    ListNode node4(4);
    ListNode node5(6);
    ListNode node6(5);
    
    node4.next = &node5;
    node5.next = &node6;
    
    ListNode* temp = &node1;
    printList(temp);
    ListNode* temp2 = &node4;
    printList(temp2);

    //Add2Numbers
    ListNode* result = s.addTwoNumbers(&node1, &node4);
    printList(result);

    return 0;
}

void printList(ListNode* node) {
    while (node != nullptr) {
        cout << "--> " << node->value << " ";
        node = node->next;
    }
    cout << endl;
}

