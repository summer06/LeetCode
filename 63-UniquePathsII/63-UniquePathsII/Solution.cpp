//
//  Solution.cpp
//  63-UniquePathsII
//
//  Created by 邓夏君 on 05/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;

//同样是动态规划问题，但是因为增加了障碍物，所以需要对障碍物做判断得到递推式
int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size();
    if (n == 0) {
        return 0;
    }
    int m = obstacleGrid[0].size();
    if (m == 0) {
        return 0;
    }
    //如果起点即有障碍物，则无法到达终点，路径数为0
    if (obstacleGrid[0][0] == 1) {
        return 0;
    }
    vector<vector<int>> pathMatrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                //需要判断是否有障碍物，如果有障碍物，则到该点的路径数为0，因此无需赋值
                if (obstacleGrid[i][j] == 0) {
                    if (j == 0) {
                        pathMatrix[i][j] = 1;
                    } else {
                        //由于有障碍物，因此，上边的格子路径数由它左边格子的路径数决定
                        pathMatrix[i][j] = pathMatrix[i][j-1];
                    }
                }
            } else if (j == 0) {
                if (obstacleGrid[i][j] == 0) {
                    //由于有障碍物，左边格子的路径数由它上方格子的路径数决定
                    pathMatrix[i][j] = pathMatrix[i-1][j];
                }
            } else {
                if (obstacleGrid[i][j] == 0) {
                    //其余格子仍按照左边和上边格子路径数决定
                    pathMatrix[i][j] = pathMatrix[i][j-1] + pathMatrix[i-1][j];
                }
            }
        }
    }
    return pathMatrix[n-1][m-1];
}
