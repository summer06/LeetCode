//
//  Solution.cpp
//  61-RotateList
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//先将链表首位相连变成一个循环链表，然后根据右位移数换算出左位移数，将链表头部移到目标位置，最后根据链表长度，给链表尾部赋上null，变回单链表即可
ListNode* Solution::rotateRight(ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* p = head;
    int length = 0;
    while(p->next != NULL) {
        p = p->next;
        length++;
    }
    length++;
    p->next = head;
    int move = 0;
    if (k <= length) {
        move = length - k;
    } else {
        move = length - (k % length);
    }
    for (int i = 0; i < move; i++) {
        head = head->next;
    }
    p = head;
    for (int i = 0; i < length - 1; i++) {
        p = p->next;
    }
    p->next = NULL;
    return head;
}
