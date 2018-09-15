//
//  Solution.cpp
//  21-MergeTwoSortedLists
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) {
        return l2;
    } else if (l2 == NULL) {
        return l1;
    }
    
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    //强制p1的第一个元素是最小值
    if (p1->val > p2->val) {
        ListNode* temp = p1;
        p1 = p2;
        p2 = temp;
    }
    
    ListNode* p = new ListNode(p1->val);
    ListNode* temp = p;
    p1 = p1->next;
    
    //遍历两个链表，取小的值给新链表赋值
    while (p1 != NULL && p2 != NULL) {
        if(p1->val <= p2->val) {
            temp->next = new ListNode(p1->val);
            p1 = p1->next;
        } else {
            temp->next = new ListNode(p2->val);
            p2 = p2->next;
        }
        temp = temp->next;
    }
    while (p1 != NULL) {
        temp->next = new ListNode(p1->val);
        p1 = p1->next;
        temp = temp->next;
    }
    while (p2 != NULL) {
        temp->next = new ListNode(p2->val);
        p2 = p2->next;
        temp = temp->next;
    }
    return p;
}
