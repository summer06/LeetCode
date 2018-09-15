//
//  Solution.hpp
//  61-RotateList
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>

/**
 * Definition for singly-linked list.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k);
};

#endif /* Solution_hpp */
