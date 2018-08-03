//
//  main.cpp
//  Delete Node in a Linked List #237
//
//  Created by Nientai Ho on 2018/8/3.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//

#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
//        ListNode* temp = node;
//        while (temp->val != node->val) {
//            temp = temp->next;
//        }
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode head(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    head.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    s.deleteNode(&head);
    
    
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
