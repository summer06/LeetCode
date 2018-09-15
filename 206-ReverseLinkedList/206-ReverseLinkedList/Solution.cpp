//
//  Solution.cpp
//  206-ReverseLinkedList
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//解决方法是用一个临时指针记住原本的链表，然后每次读取一个节点后，新建一个链表，并把原本的链表链接到后面
//需要注意的是，直接对指针赋值，指针记住的是地址
ListNode* Solution::reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* reversed = new ListNode(head->val);
    ListNode* it = head->next;
    while(it != NULL) {
        ListNode* temp = reversed;
        reversed = new ListNode(it->val);
        reversed->next = temp;
        it = it->next;
    }
    return reversed;
}
