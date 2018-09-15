//
//  main.cpp
//  66-PlusOne
//
//  Created by 邓夏君 on 04/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> a = {1, 2, 3, 4};
    Solution solution;
    vector<int> b = solution.plusOne(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    cout << endl;
}
