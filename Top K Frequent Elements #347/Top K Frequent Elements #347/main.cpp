//
//  main.cpp
//  Top K Frequent Elements #347
//
//  Created by Nientai Ho on 2018/8/7.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//  Given [1,1,1,2,2,3] and k = 2, return [1,2].

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequencyTable;
        multimap<int, int> sortByValueMap;
        vector<int> frequency;
        if (nums.size() == 1) {
            return nums;
        }
        for (int i=0; i<nums.size(); i++) {
            frequencyTable[nums[i]]++ ;
        }
        for (auto i : frequencyTable) {
            sortByValueMap.insert(make_pair(i.second, i.first));
        }
        for (auto i = sortByValueMap.rbegin(); i != sortByValueMap.rend(); i++) {
            cout << "[" << i->second << ", " << i->first << " times] ";
            frequency.push_back(i->second);
        }
        
        for (int i=0; i<frequency.size(); i++) {
            frequency.erase(frequency.begin() + k, frequency.end());
        }
        
        cout << endl;
        return frequency;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int>topFrequentNumbers;
    int k = 2;
    topFrequentNumbers.push_back(4);
    topFrequentNumbers.push_back(1);
    topFrequentNumbers.push_back(-1);
    topFrequentNumbers.push_back(2);
    topFrequentNumbers.push_back(-1);
    topFrequentNumbers.push_back(2);
    topFrequentNumbers.push_back(3);
    topFrequentNumbers = s.topKFrequent(topFrequentNumbers,k);
    cout << "Result: [";
    for (int i=0; i<topFrequentNumbers.size(); i++) {
        cout  << topFrequentNumbers[i];
        if (i<topFrequentNumbers.size()-1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
