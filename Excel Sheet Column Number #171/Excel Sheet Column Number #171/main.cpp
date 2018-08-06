//
//  main.cpp
//  Excel Sheet Column Number #171
//
//  Created by Nientai Ho on 2018/8/5.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//  26 26 26
//  A -> 1
//  B -> 2
//  C -> 3
//  ...
//  Z -> 26
//  AA -> 27
//  AB -> 28
//  AC -> 29
//  AAA -> 703

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int number = 0;
        for (int i = 0; i < s.size(); i++) {
            number = (number * 26) + (s[i] - 'A' + 1);
        }
        return number;
    }
};

int main(int argc, const char * argv[]) {
    
    Solution s;
    string title = "AB";
    int result = s.titleToNumber(title);
    cout << result << endl;
    
    return 0;
}
