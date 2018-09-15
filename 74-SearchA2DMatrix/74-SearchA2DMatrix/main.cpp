//
//  main.cpp
//  74-SearchA2DMatrix
//
//  Created by 邓夏君 on 05/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
//    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20},{23,30,34,50}};
    vector<vector<int>> matrix = {};
    Solution solution;
    cout << solution.searchMatrix(matrix, 13) << endl;
}
