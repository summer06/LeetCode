//
//  Solution.cpp
//  237-DeleteNodeInALinkedList
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//给出的节点是要删除的节点，但是我们必须知道要删除节点的上一个节点，我们才能删除该节点
//因此这里将下一个节点的值赋值给要删除的节点，然后删除下一个节点
//真是一道无厘头的题目
void Solution::deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
