//
//  main.cpp
//  Product of Array Except Self #238
//
//  Created by Nientai Ho on 2018/8/1.
//  Copyright © 2018年 HNTStudio. All rights reserved.

//  Input:  [1,2,3]
//  Output: [6,3,2]
//           0 1 2 3 size 4
//  Input:  [1,2,3,4]
//  Output: [24,12,8,6]
//          [2*3*4,1*3*4,1*2*4,1*2*3]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size(), 1);
        long end = nums.size() - 1;
        int beforeProduct = 1;
        int afterProduct = 1;
        for (int i=0; i<nums.size(); i++) {
            cout << "Round " << i << " |" << "Before " << beforeProduct << " After "<< afterProduct << " end " << end << " product[i] " << product[i] << " product[end] " << product[end] << " " << endl;
            product[i] *= beforeProduct;
            product[end] *= afterProduct;
            beforeProduct *= nums[i];
            afterProduct *= nums[end];
            end--;
        }
        
        return product;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> product;
    product.push_back(1);
    product.push_back(2);
    product.push_back(3);
    product.push_back(4);
    Solution s;
    product = s.productExceptSelf(product);
    
    cout << "Result: ";
    for (int i=0; i<product.size(); i++) {
        cout << product[i] << " ";
    }
    cout << endl;
    return 0;
}
