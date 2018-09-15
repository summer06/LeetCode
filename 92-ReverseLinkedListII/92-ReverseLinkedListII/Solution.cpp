//
//  Solution.cpp
//  92-ReverseLinkedListII
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//这道题里，将需要反转的那一端链表提出来反转，建成一个新的链表，然后再将新的链表和原来没有反转的部分连接
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* p = head;
    //如果从第一个元素开始反转，则直接反转前面的序列，再加上后面的
    if (m == 1) {
        ListNode* subhead = new ListNode(p->val);
        p = p->next;
        ListNode* temp = subhead;
        for (int i = 0; i < n - m; i++) {
            ListNode* node = new ListNode(p->val);
            node->next = subhead;
            subhead = node;
            p = p->next;
        }
        temp->next = p;
        return subhead;
    }
    //否则，前面和后面的序列都需要记录
    for (int i = 0; i < m - 2; i++) {
        p = p->next;
    }
    ListNode* p1 = p->next;
    ListNode* subhead = new ListNode(p1->val);
    ListNode* temp = subhead;
    ListNode* p2 = p1->next;
    for (int i = 0; i < n - m; i++) {
        ListNode* node = new ListNode(p2->val);
        node->next = subhead;
        subhead = node;
        p1 = p1->next;
        p2 = p2->next;
    }
    p->next = subhead;
    temp->next = p2;
    return head;
}
