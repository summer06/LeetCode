//
//  Solution.cpp
//  14-LongestCommonPrefix
//
//  Created by 邓夏君 on 12/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
#include <string>
using namespace std;

//记得要考虑vector为空的情况
string Solution::longestCommonPrefix(vector<string>& strs) {
    int len = strs.size();
    if (len == 0) {
        return "";
    }
    string prefix = "";
    string first = strs[0];
    int s = first.size();
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < len; j++) {
            if (strs[j][i] != first[i]) {
                return prefix;
            }
        }
        prefix = first.substr(0, i+1);
    }
    return prefix;
}
