//
//  Solution.cpp
//  66-PlusOne
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

vector<int> Solution::plusOne(vector<int>& digits) {
    int n = digits.size();
    int add = 0;
    //个位单独考虑，中间位置考虑前面是否有进位，第一位也要单独考虑
    for (int i = n-1; i >= 0; i--) {
        int temp;
        if (i == n-1) {
            temp = digits[i] + 1;
        } else {
            temp = digits[i] + add;
        }
        if(temp == 10) {
            digits[i] = 0;
            add = 1;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
                break;
            }
        } else if (temp == 11) {
            digits[i] = 1;
            add = 1;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
                break;
            }
        } else {
            digits[i] = temp;
            break;
        }
    }
    return digits;
}
