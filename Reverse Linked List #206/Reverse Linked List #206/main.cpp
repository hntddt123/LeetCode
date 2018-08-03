//
//  main.cpp
//  Reverse Linked List #206
//
//  Created by Nientai Ho on 2018/8/2.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Reverse Linked List
//  Input: 1->2->3->4->5->NULL
//  Output: 5->4->3->2->1->NULL


#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void printList(ListNode* node);

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* next = nullptr;
        ListNode* previous = nullptr;
        while (temp!=nullptr) {
            //point to next place to reverse
            next = temp->next;
            //reverse pointer
            temp->next = previous;
            //point to previous place
            previous = temp;
            //temp point to next place
            temp = next;
        }
        head = previous;
        return head;
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

    ListNode* newhead;
    newhead = s.reverseList(&head);
    
    printList(newhead);
    
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
