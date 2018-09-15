//
//  main.cpp
//  two-sum
//
//  Created by 邓夏君 on 02/08/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution;
    vector<int> numArray = {2, 7, 11, 15};
    vector<int> output = solution.twoSum(numArray, 22);
    cout << output[0] << endl;
    cout << output[1] << endl;
    return 0;
}
