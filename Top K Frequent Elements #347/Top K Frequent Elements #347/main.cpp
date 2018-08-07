//
//  main.cpp
//  Top K Frequent Elements #347
//
//  Created by Nientai Ho on 2018/8/7.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//  Given [1,1,1,2,2,3] and k = 2, return [1,2].

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topNumbers;
        
        return topNumbers;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int>topFrequentNumbers;
    int k = 2;
    topFrequentNumbers.push_back(1);
    topFrequentNumbers.push_back(1);
    topFrequentNumbers.push_back(1);
    topFrequentNumbers.push_back(2);
    topFrequentNumbers.push_back(2);
    topFrequentNumbers.push_back(3);
    topFrequentNumbers = s.topKFrequent(topFrequentNumbers,k);
    for (int i=0; i<topFrequentNumbers.size(); i++) {
        cout << topFrequentNumbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
