//
//  Solution.cpp
//  125-ValidPalindrome
//
//  Created by 邓夏君 on 14/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <string>
using namespace std;

bool Solution::isPalindrome(string s) {
    int len = s.size();
    if (len == 0) {
        return true;
    }
    string sentence = "";
    for (int i = 0; i < len; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            sentence = sentence + s.substr(i, 1);
        }
    }
    len = sentence.size();
    if (len % 2 == 0) {
        for(int i = 0; i < len/2; i++) {
            if((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z')) {
                if ((sentence[i] == sentence[len - 1 - i] || abs(sentence[i] - sentence[len - 1 - i]) == 32)) {
                    continue;
                } else {
                    return false;
                }
            } else if (sentence[i] >= '0' && sentence[i] <= '9') {
                if (sentence[i] == sentence[len -1 - i]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
    } else {
        for(int i = 0; i < (len-1)/2; i++) {
            if((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z')) {
                if ((sentence[i] == sentence[len - 1 - i] || abs(sentence[i] - sentence[len - 1 - i]) == 32)) {
                    continue;
                } else {
                    return false;
                }
            } else if (sentence[i] >= '0' && sentence[i] <= '9') {
                if (sentence[i] == sentence[len -1 - i]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
    }
    return true;
}
