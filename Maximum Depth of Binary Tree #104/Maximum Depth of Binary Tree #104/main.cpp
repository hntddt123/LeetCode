//
//  main.cpp
//  Maximum Depth of Binary Tree #104
//
//  Created by Nientai Ho on 2018/7/31.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// EX: Given binary tree [3,9,20,null,null,15,7]
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
        int depth = 0;
        
        return depth;
    }
};
int main(int argc, const char * argv[]) {
    Solution s;
    TreeNode root(10);
    s.maxDepth(&root);
    
    
    
    return 0;
}
