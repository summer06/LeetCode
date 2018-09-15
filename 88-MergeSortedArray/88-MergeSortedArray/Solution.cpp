//
//  Solution.cpp
//  88-MergeSortedArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

//每将nums2里面的一个元素加入到nums1里面之后，立刻逐个冒泡到正确的位置
void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = m; i < m+n; i++) {
        nums1[i] = nums2[i-m];
        int k = i;
        for (int j = i - 1; j >= 0; j--) {
            if (nums1[k] < nums1[j]) {
                int temp = nums1[k];
                nums1[k] = nums1[j];
                nums1[j] = temp;
                k--;
            }
        }
    }
}
