//
//  Solution.cpp
//  665-Non-decreasingArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

bool Solution::checkPossibility(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (nums[i] > nums[i+1]) {
            count++;
            //如果出现两对不是非下降的数字，则最少需要修改两个元素，因此不符合题意，错误
            if (count >= 2) {
                return false;
            } else {
            //如果只有一对的情况下，有两种修改方法，一个是修改大数，一个是修改小数
                //下面第一个判断条件成立的情况下，大数没有合适的值可以使得数组非下降
                //下面第二个判断条件成立的情况下，小数没有合适的值可以使得数组非下降
                //因此当两个数都不能修改，则无法使得数组非下降，故返回false
                if ((i > 0) && (nums[i - 1] > nums[i + 1])) {
                    if ((i < n-2) && (nums[i] > nums[i+2])) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
