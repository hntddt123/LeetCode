//
//  main.cpp
//  Reverse Integer #7
//
//  Created by Nientai Ho on 2018/7/29.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Reverse Int
//  123 --> 321
//  120 --> 21
//  -123 --> -321
//  return 0 when overflow

#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        //Count digits of number
        //Take mod to build reverse
        int reverseNumber = 0;
        int min = INT_MIN;
        int max = INT_MAX;
        
        while (x != 0) {
            int digit = x%10;
            if (reverseNumber > max/10 || reverseNumber < min/10) {
                cout << "Overflow" << endl;
                return 0;
            }
            reverseNumber = reverseNumber * 10 + digit;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
        return reverseNumber;
    }
};

int main(int argc, const char * argv[]) {
    
    int number = 1534236461;
    int result = 0;
    Solution s;
    result = s.reverse(number);
    cout << "Reversed: " << result << endl;
    return 0;
}
