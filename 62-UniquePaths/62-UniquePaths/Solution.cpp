//
//  Solution.cpp
//  62-UniquePaths
//
//  Created by 邓夏君 on 05/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

//动态规划问题：动态规划要求利用上一次的结果，是一种特殊的迭代思想；关键是要找到递推关系式
int Solution::uniquePaths(int m, int n) {
    //二维数组都应该先判断空的情况
    if (m == 0 || n == 0) {
        return 0;
    } else {
        vector<vector<int>> pathsMatrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                //在左边和上边的格子都只有一条路径到达，因此都赋值为1
                if (i == 0 || j == 0) {
                    pathsMatrix[i][j] = 1;
                } else {
                    //其余格子的路径数等于左边格子的路径数+上边格子的路径数（由于本题目的终点格子只能从左边格子和上边格子到达）
                    pathsMatrix[i][j] = pathsMatrix[i-1][j] + pathsMatrix[i][j-1];
                }
            }
        }
        return pathsMatrix[n-1][m-1];
    }
}
