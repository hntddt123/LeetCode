//
//  main.cpp
//  Binary Tree Inorder Traversal #94
//
//  Created by Nientai Ho on 2018/8/1.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//Input: [1,null,2,3]
// 1
//  \
//   2
//  /
// 3
//
//Output: [1,3,2]

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void inOrderHelper(TreeNode* root, vector<int>* inOrder) {
        if (root != nullptr) {
            if (root->left != nullptr) {
                inOrderHelper(root->left, inOrder);
            }
            inOrder->push_back(root->val);
            if (root->right != nullptr) {
                inOrderHelper(root->right, inOrder);
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        //Point to same vector to build
        inOrderHelper(root,&inOrder);
        
        return inOrder;
    }
};

int main(int argc, const char * argv[]) {

    vector<int> inOrder;
    Solution s;
    TreeNode root(1);
    TreeNode node1(2);
    TreeNode node2(3);

    
    root.right = &node1;
    node1.left = &node2;
    
    inOrder = s.inorderTraversal(&root);
    for (int i=0; i<inOrder.size(); i++) {
        cout << inOrder[i] << " ";
    }
    cout << endl;
    
    return 0;
}
