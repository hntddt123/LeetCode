//
//  main.cpp
//  Generate Parentheses #22
//
//  Created by Nientai Ho on 2018/8/8.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
//  n = 3
//  [ "((()))", "(()())", "(())()", "()(())", "()()()" ]
//  n = 2
//  [ "(())", "()()" ]
//  n = 1
//  [ "()" ]
//  n = 0
//  [ ]

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> parentheses;
        adddingParenthesis(parentheses, "", n, 0);
        return parentheses;
    }
    void adddingParenthesis(vector<string> &parentheses, string str, int openParenthesisCount, int closeParenthesisCount) {
        if (openParenthesisCount == 0 && closeParenthesisCount == 0) {
            parentheses.push_back(str);
        } else {
            if (openParenthesisCount > 0) {
                adddingParenthesis(parentheses, str + "(", openParenthesisCount-1, closeParenthesisCount+1);
            }
            if (closeParenthesisCount > 0) {
                adddingParenthesis(parentheses, str + ")", openParenthesisCount, closeParenthesisCount-1);
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    int n = 3;
    vector<string> parentheses = s.generateParenthesis(n);
    
    for (auto i : parentheses) {
        cout << i << " ";
    }
    
    return 0;
}
