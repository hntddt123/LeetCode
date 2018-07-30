//
//  main.cpp
//  Fizz Buzz #412
//
//  Created by Nientai Ho on 2018/7/30.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Multiples of three it should output “Fizz”
//  For the multiples of five output “Buzz”
//  For both three and five output “FizzBuzz”

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>result;
        for (int i=1; i<=n; i++) {
            if (i%3 == 0 && i%5 == 0) {
                result.push_back("FizzBuzz");
            } else if (i%5 == 0) {
                result.push_back("Buzz");
            } else if (i%3 == 0) {
                result.push_back("Fizz");
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    Solution s;
    vector<string>result;
    
    int n = 15;
    result = s.fizzBuzz(n);
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
