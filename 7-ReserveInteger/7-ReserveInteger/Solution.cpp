//
//  Solution.cpp
//  7-ReserveInteger
//
//  Created by 邓夏君 on 03/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

#include <stdio.h>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int Solution::reverse(int x) {
    int reverseNum = 0;
    //C++中通常使用流对象来进行类型转换 需包含头文件<sstream>
    stringstream temp;
    temp << x;
    string tempNum = temp.str();
    int flag = 0;
    if (tempNum[0] == '-') {
        tempNum = tempNum.substr(1);
        flag = 1;
    }
    //<algorithm>里面有字符串反转函数reverse，传入字符串的头和尾的迭代器即可
    std::reverse(tempNum.begin(), tempNum.end());
    if (flag == 1) {
        tempNum = "-" + tempNum;
    }
    //从字符串通过流对象转换为int数据时，如果超过int能够表示的最大值或最小值，则自动赋值为最大值或最小值
    stringstream temp2(tempNum);
    temp2 >> reverseNum;
    if (reverseNum >= 2147483647 || reverseNum <= -2147483648) {
        return 0;
    }
    return reverseNum;
}
