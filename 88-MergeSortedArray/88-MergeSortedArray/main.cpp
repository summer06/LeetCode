//
//  main.cpp
//  88-MergeSortedArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> nums1 = {2,2,3,4,0,0};
    vector<int> nums2 = {1,5};
    Solution solution;
    solution.merge(nums1, 4, nums2, 2);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
}
