//
//  main.cpp
//  35-SearchInsertPosition
//
//  Created by 邓夏君 on 03/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> a = {1, 3, 5, 6};
    Solution solution;
    cout << solution.searchInsert(a, 0) << endl;
}
