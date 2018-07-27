//
//  main.cpp
//  Two Sum
//
//  Created by Nientai Ho on 2018/6/5.
//  Copyright © 2018年 HNTStudio. All rights reserved.

/*
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    cout << "Calculating target sum..." << endl;
    
    vector<int> sum;
    for (int i=0; i<nums.size(); i++) {
        for (int j=i+1; j<nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                sum.push_back(i);
                sum.push_back(j);
                cout << nums[i] << "+" << nums[j] << " = " << target << endl;
            }
        }
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(8);
    int target = 7;
    
    Solution s;
    s.twoSum(numbers, target);
    
    return 0;
}
