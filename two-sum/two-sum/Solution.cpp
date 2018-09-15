//
//  Solution.cpp
//  two-sum
//
//  Created by 邓夏君 on 06/08/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <iostream>
using namespace std;

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    vector<int> result(2);
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}
