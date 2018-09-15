//
//  Solution.cpp
//  709-ToLowerCase
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <string>
using namespace std;

string Solution::toLowerCase(string str) {
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i]+32;
        }
    }
    return str;
}
