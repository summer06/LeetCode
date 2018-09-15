//
//  Solution.cpp
//  725-SplitLinkedListInParts
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
using namespace std;


vector<ListNode*> Solution::splitListToParts(ListNode* root, int k) {
    vector<ListNode*> result;
    ListNode* p = root;
    int len = 0;
    while(p != NULL) {
        len++;
        p = p->next;
    }
    p = root;
    //如果分成的份数比元素数多，那么需要在后面补充null元素
    if (k >= len) {
        for (int i = 0; i < len; i++) {
            ListNode* temp = new ListNode(p->val);
            result.push_back(temp);
            p = p->next;
        }
        for (int i = 0; i < k - len; i++) {
            result.push_back(NULL);
        }
    } else {
        //先计算每一份应该至少有的元素，然后计算余数，将余数平均分配到前面的数组去，即前面余数个数组的元素数是多1的
        int n = len / k;
        int remainder = len % k;
        //循环加入元素多1的链表
        for (int i = 0; i < remainder; i++) {
            ListNode* part = p;
            for (int j = 0; j < n; j++) {
                p = p->next;
            }
            root = p->next;
            p->next = NULL;
            p = root;
            result.push_back(part);
        }
        //循环加入剩下的链表
        for (int i = 0; i < k - remainder; i++) {
            ListNode* part = p;
            for (int j = 0; j < n - 1; j++) {
                p = p->next;
            }
            root = p->next;
            p->next = NULL;
            p = root;
            result.push_back(part);
        }
    }
    return result;
}
