//
//  Solution.cpp
//  74-SearchA2DMatrix
//
//  Created by 邓夏君 on 05/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

bool Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
    //要注意判断外层数组和内层数组是否为空的情况                                                                                                                                                                               
    int m = matrix.size();
    if (m == 0) {
        return false;
    }
    int n = matrix[0].size();
    if (n == 0) {
        return false;
    }
    for (int i = 0; i < m; i++) {
        if (matrix[i][n-1] >= target) {
            for (int j = n-1; j >= 0; j--) {
                if (matrix[i][j] == target) {
                    return true;
                }
            }
            return false;
        }
    }
    return false;
}
