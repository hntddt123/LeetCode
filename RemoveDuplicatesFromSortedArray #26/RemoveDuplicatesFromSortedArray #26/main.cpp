//
//  main.cpp
//  RemoveDuplicatesFromSortedArray #26
//
//  Created by Nientai Ho on 2018/7/27.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  remove the duplicates in-place such that each element appear only once and return the new length

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int index = 0;
        for (int next=1; next<nums.size(); next++) {
            if (nums[index] != nums[next]) {
                index++;
                nums[index] = nums[next];
            }
        }
        return index+1;
    }
};
int main(int argc, const char * argv[]) {
    
    Solution s;
    vector<int> numberVector;
    numberVector.push_back(1);
    numberVector.push_back(1);
    numberVector.push_back(2);
    numberVector.push_back(2);
    numberVector.push_back(2);
    numberVector.push_back(3);

    for (int i=0; i<numberVector.size(); i++) {
        cout << numberVector[i] << " ";
    }
    cout << endl;
    int size = s.removeDuplicates(numberVector);
    for (int i=0; i<numberVector.size(); i++) {
        cout << numberVector[i] << " ";
    }
    cout << endl;
    cout << "Length after: " << size << endl;
    
    return 0;
}
