//
//  Solution.cpp
//  35-SearchInsertPosition
//
//  Created by 邓夏君 on 03/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

int Solution::searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int i;
    for (i=0; i < n; i++) {
        if(nums[i] == target) {
            return i;
        } else if (nums[i] > target) {
                return i;
        }
    }
    return i;
}
