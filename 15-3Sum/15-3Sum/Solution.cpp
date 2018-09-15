//
//  Solution.cpp
//  15-3Sum
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
#include <algorithm>
using namespace std;

//这道题是two sum的延伸，这里可以理解为-a = b + c，因此第一个循环遍历数组，固定一个数字之后，就要在剩下的数组元素里找到两个数的和，
//让它等于该数，除此以外，要考虑到重复的情况
//由于要考虑重复情况，因此首先将数组按大小顺序排序是非常有用的，这样也方便了后面的查找
//按照大小顺序排序后，当后面一个元素和前面一个元素相同的时候，该元素就不用再考虑了，用continue语句直接下一个循环
//找两个数的时候，用两个下标，分别从固定的元素向后找和从数组末尾向前找，根据它们的和与固定元素的大小关系来进行后推或者前移
vector<vector<int>> Solution::threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int len = nums.size();
    if (len == 0) {
        return result;
    }
    //排序
    sort(nums.begin(), nums.end());
    int j;
    int k;
    //第一重循环，用来遍历每个元素，该元素是我们该轮的固定元素a，我们要在后面找到两个数的和，使之相加等于-a
    for (int i = 0; i < len; i++) {
        j = i + 1;
        k = len - 1;
        if (i != 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        //计算-a
        int temp = 0 - nums[i];
        //剩下的数组从两边开始遍历
        while (j < k) {
            //如果和小于-a，则需要大一点的数，因此j向后移
            if (temp > nums[j] + nums[k]) {
                j++;
            //如果和大于-a，则需要小一点的数，因此k向前移
            } else if (temp < nums[j] + nums[k]) {
                k--;
            //和相等则记录到数组里，并且递增j和递减k，继续查找是否有合适的数
            } else {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                //如果元素重复则跳过，递增j
                while(j < k && nums[j] == nums[j - 1]) {
                    j++;
                }
                //如果元素重复则跳过，递减k
                while(j < k && nums[k] == nums[k+1]) {
                    k--;
                }
            }
        }
    }
    return result;
}
