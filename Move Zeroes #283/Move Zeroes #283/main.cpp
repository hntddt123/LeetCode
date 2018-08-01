//
//  main.cpp
//  Move Zeroes #283
//
//  Created by Nientai Ho on 2018/8/1.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Input:  [0,1,0,3,12]
//  Output: [1,3,12,0,0]


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroCount = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroCount] = nums[i];
                nonZeroCount++;
            }
        }
        for (int i=nonZeroCount; i<nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    Solution s;
    
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    s.moveZeroes(nums);
    
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
