//
//  Solution.cpp
//  203-RemoveLinkedListElements
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//删除一个链表元素，首先要对删除第一个元素单独考虑，然后，后面的元素，必须有一个指针指向要删除的元素的前一个元素，才能进行删除操作
ListNode* Solution::removeElements(ListNode* head, int val) {
    if (head == NULL) {
        return head;
    }
    ListNode* p = head;
    ListNode* temp = head;
    while (p != NULL) {
        if (p->val == val) {
            if (p == head) {
                head = head->next;
                p = head;
                temp = head;
            } else {
                temp->next = p->next;
                p = temp->next;
            }
        } else {
            temp = p;
            p = p->next;
        }
    }
    return head;
}
