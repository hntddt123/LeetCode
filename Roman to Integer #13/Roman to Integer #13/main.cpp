//
//  main.cpp
//  Roman to Integer #13
//
//  Created by Nientai Ho on 2018/8/10.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Symbol       Value
//  I             1
//  V             5
//  X             10
//  L             50
//  C             100
//  D             500
//  M             1000
//
//  I = 1, II = 2 , III = 3
//  IV = 4,
//  V = 5,
//  VI = 6, VII = 7, VIII = 8
//  IX = 9,
//  X = 10,
//  XI = 11, XII = 12, XIII = 13
//  XIV = 14
//  XIX = 19
//  XL = 40, XC = 90, CD = 400, CM = 900
//  Input from 1 to 3999

#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        if (s.find("IV")!= -1) {
            sum -= 2;
        }
        if (s.find("IX")!= -1) {
            sum -= 2;
        }
        if (s.find("XL")!= -1) {
            sum -= 20;
        }
        if (s.find("XC")!= -1) {
            sum -= 20;
        }
        if (s.find("CD")!= -1) {
            sum -= 200;
        }
        if (s.find("CM")!= -1) {
            sum -= 200;
        }
        
        for (int i = 0; i < s.length(); i++) {
            cout << s[i];
            if (s[i] == 'I') {
                sum += 1;
            }
            if (s[i] == 'V') {
                sum += 5;
            }
            if (s[i] == 'X') {
                sum += 10;
            }
            if (s[i] == 'L') {
                sum += 50;
            }
            if (s[i] == 'C') {
                sum += 100;
            }
            if (s[i] == 'D') {
                sum += 500;
            }
            if (s[i] == 'M') {
                sum += 1000;
            }
        }
        
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    string input = "IV";
    int result = s.romanToInt(input);
    cout << " Decimal: " << result << endl;
    
    return 0;
}
