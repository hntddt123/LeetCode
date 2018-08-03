//
//  main.cpp
//  Delete Node in a Linked List #237
//
//  Created by Nientai Ho on 2018/8/3.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Input: head = [4,5,1,9], node = 5
//  Output: [4,1,9]

#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode* node);

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode head(4);
    ListNode node2(5);
    ListNode node3(1);
    ListNode node4(9);
    
    head.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    s.deleteNode(&node2);
    printList(&head);
    
    return 0;
}

void printList(ListNode* node) {
    cout << "Head";
    while (node != nullptr) {
        cout << "--> " << node->val << " ";
        node = node->next;
    }
    cout << "--> Null";
    cout << endl;
}
