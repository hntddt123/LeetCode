//
//  main.cpp
//  First Unique Character in a String #387
//
//  Created by Nientai Ho on 2018/8/17.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
//  s = "leetcode"
//  return 0
//
//  s = "loveleetcode",
//  return 2


#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        if (s.empty()) {
            return -1;
        }
        int alphabets[26] = {0};
        //store alphabet count
        for (int i = 0; i < s.length(); i++) {
            alphabets[s[i] - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (alphabets[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    string str = "loveleetcode";
    cout << s.firstUniqChar(str) << endl;
    
    return 0;
}
