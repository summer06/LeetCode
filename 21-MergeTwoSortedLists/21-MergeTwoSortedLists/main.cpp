//
//  main.cpp
//  21-MergeTwoSortedLists
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ListNode* list1 = new ListNode(-9);
    list1->next = new ListNode(3);
//    list1->next->next = new ListNode(9);
    ListNode* list2 = new ListNode(5);
    list2->next = new ListNode(7);
//    list2->next->next = new ListNode(41);
    Solution solution;
    ListNode* mergeList = solution.mergeTwoLists(list1, list2);
    ListNode* p = mergeList;
    while(p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}
