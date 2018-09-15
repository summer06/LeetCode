//
//  Solution.hpp
//  725-SplitLinkedListInParts
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include <vector>
using namespace std;

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
    vector<ListNode*> splitListToParts(ListNode* root, int k);
};

#endif /* Solution_hpp */
