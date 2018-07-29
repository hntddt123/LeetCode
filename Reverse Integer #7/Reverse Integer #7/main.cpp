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
        int numberToReverse = abs(x);
        int reverseNumber = 0;
        int times = 1;
        while (numberToReverse >= 10) {
            times *= 10;
            numberToReverse /= 10;
        }
        while (times != 0) {
            int digit = x%10;
            reverseNumber = reverseNumber + digit * times;
            cout << times << endl;
            cout << digit << " ";
            times /= 10;
            x /= 10;
        }
        if (reverseNumber > INT_MAX) {
            return 0;
        }
        return reverseNumber;
    }
};

int main(int argc, const char * argv[]) {
    
    int number = 1534236469;
    int result = 0;
    Solution s;
    result = s.reverse(number);
    cout << "Reversed: " << result << endl;
    return 0;
}
