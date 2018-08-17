//
//  main.cpp
//  Contains Duplicate #217
//
//  Created by Nientai Ho on 2018/8/17.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Given an array of integers, find if the array contains any duplicates.
//  Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
//  Input: [1,1,1,3,3,4,3,2,4,2]
//  Output: true

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        return false;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> nums;
    cout << s.containsDuplicate(nums) << endl;
    
    return 0;
}
