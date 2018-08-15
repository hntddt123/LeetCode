//
//  main.cpp
//  Majority Element #169
//
//  Created by Nientai Ho on 2018/8/13.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  The majority element is the element that appears more than ⌊ n/2 ⌋ times in size n array
//  Input: [2,2,1,1,1,2,2]
//  Output: 2

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> majorityMap;
        
        for (int i=0; i<nums.size(); i++) {
            majorityMap[nums[i]]++;
        }
        for (auto i : majorityMap) {
            if (i.second > floor(nums.size()/2)) {
                return i.first;
            }
//            cout << i.first << " ";
//            cout << i.second << " ";
//            cout << endl;
        }
        cout << endl;
        
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    
    Solution s;
    vector<int> nums;
    int majority = 0;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    majority = s.majorityElement(nums);
    cout << majority << endl;
    
    
    return 0;
}
