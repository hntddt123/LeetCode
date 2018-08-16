//
//  main.cpp
//  Valid Anagram #242
//
//  Created by Nientai Ho on 2018/8/14.
//  Copyright © 2018年 HNTStudio. All rights reserved.
//
//  Given two strings s and t , write a function to determine if t is an anagram of s.
//  Input: s = "anagram", t = "nagaram"
//  Output: true


#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //If length different then not Anagram
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> anagramHash;
        for (int i = 0; i < s.length(); i++) {
            anagramHash[s[i]]++;
            anagramHash[t[i]]--;
        }
        for (auto i : anagramHash) {
            if (i.second != 0) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    string s = "abc";
    string t = "acb";
    cout << solution.isAnagram(s, t) << endl;
    
    return 0;
}
