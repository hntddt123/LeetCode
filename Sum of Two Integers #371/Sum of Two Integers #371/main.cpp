//
//  main.cpp
//  Sum of Two Integers #371
//
//  Created by Nientai Ho on 2018/8/4.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        int sum = a;
        
        if (b<0) {
            for (int i=0; i>b; i--) {
                sum--;
            }
        }
        
        for (int i=0; i<b; i++) {
            sum++;
        }
        
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    int num1 = 1;
    int num2 = 2;
    int result = s.getSum(num1, num2);
    cout << result << endl;
    
    return 0;
}
