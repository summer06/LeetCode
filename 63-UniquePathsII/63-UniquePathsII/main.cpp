//
//  main.cpp
//  63-UniquePathsII
//
//  Created by 邓夏君 on 05/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> matrix = {{0, 0}, {1, 1}, {0, 0}};
    Solution solution;
    cout << solution.uniquePathsWithObstacles(matrix) << endl;
}
