//
//  main.cpp
//  Single Number #136
//
//  Created by Nientai Ho on 2018/7/30.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
// Non-empty array of integers, every element appears twice except for one. Find that single one
// 4 1 2 1 2
// 1 4 2 1 2
// 1 2 4 1 2
// return 4

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> singleTable;
        if (nums.size() == 1) {
            return nums[0];
        }
        for (int i=0; i<nums.size(); i++) {
            singleTable[nums[i]]++ ;
            
        }
        for (auto i : singleTable) {
            cout << "Frequency of " << i.first << " is: " << i.second << endl;
            if (i.second == 1) {
                return i.first;
            }
        }
        
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> numbers;
    
    numbers.push_back(1);
    numbers.push_back(4);
    numbers.push_back(2);
    numbers.push_back(1);
    numbers.push_back(2);
    
    int singleNumber = s.singleNumber(numbers);
    
    cout << "Result:" << singleNumber << endl;
    
    return 0;
}
