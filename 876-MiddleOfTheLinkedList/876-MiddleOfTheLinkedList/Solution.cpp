//
//  Solution.cpp
//  876-MiddleOfTheLinkedList
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//使用快慢指针寻找中间节点
//快指针每次移动两步，慢指针每次移动一步，那么当快指针到达链表尾部的时候，慢指针刚好到达中间
//需要注意的是，如果节点数是奇数，应用快指针->next是否为空作为判断；如果节点数是偶数，则用快指针是否为空判断
ListNode* Solution::middleNode(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL) {
        if (fast->next == NULL) {
            return slow;
        } else {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow;
}
