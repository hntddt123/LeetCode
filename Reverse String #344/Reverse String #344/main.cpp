//
//  main.cpp
//  Reverse String #344
//
//  Created by Nientai Ho on 2018/7/30.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
// Given s = "hello", return "olleh".

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string reverseStr;
        for (long i=s.length()-1; i>=0; i--) {
            reverseStr += s[i];
        }
        return reverseStr;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    string str = "Hello";
    string result = s.reverseString(str);
    cout << result << endl;
    
    return 0;
}
