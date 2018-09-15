//
//  Solution.hpp
//  876-MiddleOfTheLinkedList
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head);
};

#endif /* Solution_hpp */
