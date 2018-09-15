//
//  main.cpp
//  15-3Sum
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> nums = {-2, -4, 1, 2, 0, -1, 7, 2};
    Solution solution;
    vector<vector<int>> result = solution.threeSum(nums);
    for (int i = 0; i < result.size(); i++) {
        if (result.size() != 0) {
            for (int j = 0; j < result[0].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}
