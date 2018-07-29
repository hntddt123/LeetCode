//
//  main.cpp
//  Count and Say #38
//
//  Created by Nientai Ho on 2018/7/29.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Input Output
//  1     1      --- one 1 or 1 "1"
//  2     11     --- two 1s or 2 "1"
//  3     21     --- one 2 and one 1 or 1 "2" 1 "1"
//  4     1211   --- one 1 one 2 two 1 or 1 "1" 1 "2" 2 "1"
//  5     111221 --- three 1 two 2 one 1 or 3 "1" 2 "2" 1 "1"
//  6     312211
//  7     13112221
//  8     1113213211
//  9     31131211131221
//  10    13211311123113112211

#include <iostream>
using namespace std;


class Solution {
public:
    string countAndSay(int n) {
        string output = "1";
        //Goes through n-1 iterations
        for (int i=1; i<n; i++) {
            output = countIndex(output);
        }
        return output;
    }
    string countIndex(string output) {
        string countString = "";
        int count = 1;
        char numberToCount = output.at(0);
        //cout << "numberToCount: " << numberToCount << endl;
        for (int i=1; i<output.length(); i++) {
            if (output[i] == numberToCount) {
                count++;
            } else {
                countString += to_string(count);
                countString += numberToCount;
                numberToCount = output[i];
                count = 1;
            }
        }
        countString += to_string(count);
        countString += numberToCount;
        //cout << countString << endl;
        return countString;
    }
};

int main(int argc, const char * argv[]) {
    
    Solution s;
    int number = 4;
    string result;
    result = s.countAndSay(number);
    cout << "Result: "  << result << endl;
    
    return 0;
}
