//
//  Solution.cpp
//  24-SwapNodesInPairs
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

ListNode* Solution::swapPairs(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* p1 = head;
    ListNode* p2 = p1->next;
    ListNode* p3 = p2->next;
    while(p2 != NULL || p3 != NULL) {
        if (p1 == head) {
            p1->next = p3;
            p2->next = p1;
            head = p2;
            p2 = p3;
            if (p3 == NULL) {
                return head;
            }
            p3 = p3->next;
        } else {
            if (p3 != NULL) {
                p2->next = p3->next;
                p3->next = p2;
                p1->next = p3;
                p1 = p2;
                p2 = p2->next;
                if (p2 == NULL) {
                    return head;
                }
                p3 = p2->next;
            } else {
                return head;
            }
        }
    }
    return head;
}
