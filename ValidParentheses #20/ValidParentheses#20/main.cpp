//
//  main.cpp
//  ValidParentheses#20
//
//  Created by Nientai Ho on 2018/7/27.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
// Check if ()[]{} have pair matches
// [()] true
// ([)] false

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stringStack;
        for (int index=0; index<s.length(); index++) {
            if (s.length()%2 !=0) {
                return false;
            }
            if (s[index] == '(' || s[index] == '[' || s[index] == '{') {
                stringStack.push(s[index]);
            }
            if(!stringStack.empty()){
                if((stringStack.top() == '(' && s[index] == ')') ||
                   (stringStack.top() == '[' && s[index] == ']') ||
                   (stringStack.top() == '{' && s[index] == '}')) {
                    cout << stringStack.top() << " ";
                    stringStack.pop();
                }
            }
        }
        //All matched
        if (stringStack.empty()) {
            return true;
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    // Insert code here...
    Solution s;
    string str = "";
    //Valid string -- ()[]{}, {[()]}
    bool isValid = s.isValid(str);
    cout << isValid << endl;
    
    return 0;
}
