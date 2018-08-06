//
//  main.cpp
//  Best Time to Buy and Sell Stock II #122
//
//  Created by Nientai Ho on 2018/8/6.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Input: [7,1,5,3,6,4]
//  Output: 7
//  Diff if buy 7: [-6,-2,-4,-1,-3]
//  Diff if buy 1: [4,2,5,3]
//  Diff if buy 5: [-2,1,-1]
//  Diff if buy 3: [3,1]
//  Diff if buy 6: [-2]
//  Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
//  Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
//  Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }
        int max = 0;
        for (int i=0; i<prices.size()-1; i++) {
            if (prices[i+1] > prices[i] ) {
                max += prices[i+1] - prices[i];
            }
        }
        return max;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> prices;
    prices.push_back(6);
    prices.push_back(7);
    prices.push_back(4);
    prices.push_back(3);
    prices.push_back(1);
    
    int result = s.maxProfit(prices);
    cout << result << endl;
    
    return 0;
}
