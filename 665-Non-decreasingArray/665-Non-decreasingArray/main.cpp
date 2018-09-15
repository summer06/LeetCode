//
//  main.cpp
//  665-Non-decreasingArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> a = {4, 2, 1};
    Solution solution;
    cout << solution.checkPossibility(a) << endl;
}
