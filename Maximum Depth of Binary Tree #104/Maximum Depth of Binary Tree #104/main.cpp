//
//  main.cpp
//  Maximum Depth of Binary Tree #104
//
//  Created by Nientai Ho on 2018/7/31.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//

// EX: Given binary tree [3,9,20,null,null,15,7]
//1       3[0]
//     /        \
//2  9[1] 2n+1 20[2] 2n+2
//   /  \      /  \
//3 [3] [4] 15[5] 7[6]
// return depth = 3.

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
int main(int argc, const char * argv[]) {
    Solution s;
    TreeNode root(3);
    TreeNode node1(9);
    TreeNode node2(20);
    TreeNode node5(15);
    TreeNode node6(7);

    root.left = &node1;
    root.right = &node2;
    node2.left = &node5;
    node2.right = &node6;

    cout << "Tree Depth: " << s.maxDepth(&root) << endl;
    
    
    
    return 0;
}
