
//
//  Solution.cpp
//  442-FindAllDuplicatesInAnArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

vector<int> Solution::findDuplicates(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    if (n == 0 || n == 1) {
        return result;
    }
    vector<int> count;
    count.assign(n+1, 0);
    //使用下标计数，注意循环的时候应该是遍历原本的数组
    for(int i = 0; i < n; i++) {
        count[nums[i]]++;
    }
    for (int i = 0; i < n+1; i++) {
        if (count[i] == 2) {
            result.push_back(i);
        }
    }
    return result;
}
