//
//  Solution.cpp
//  788-RotateDigits
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <sstream>
using namespace std;

//将数字转换为字符串进行判断
int Solution::rotatedDigits(int N) {
    int n = 0;
    bool valid = true;
    for (int i = 1; i <= N; i++) {
        valid = true;
        stringstream stream;
        stream << i;
        string strNum = stream.str();
        for (int j = 0; j < strNum.size(); j++) {
            if (strNum[j] == '3' || strNum[j] == '4' || strNum[j] == '7') {
                valid = false;
                break;
            } else if (strNum[j] == '2') {
                strNum[j] = '5';
            } else if (strNum[j] == '5') {
                strNum[j] = '2';
            } else if (strNum[j] == '6') {
                strNum[j] = '9';
            } else if (strNum[j] == '9') {
                strNum[j] = '6';
            }
        }
        stringstream intNum(strNum);
        int num;
        intNum >> num;
        if (valid && i != num) {
            n++;
        }
    }
    return n;
}
