//
//  main.cpp
//  442-FindAllDuplicatesInAnArray
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> test = {2, 2};
    Solution solution;
    vector<int> result = solution.findDuplicates(test);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
