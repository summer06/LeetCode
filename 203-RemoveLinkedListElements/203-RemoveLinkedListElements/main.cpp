//
//  main.cpp
//  203-RemoveLinkedListElements
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ListNode* list = new ListNode(1);
    ListNode* temp = list;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(6);
    temp = temp->next;
    temp->next = new ListNode(1);
    temp = temp->next;
    temp->next = new ListNode(4);
    temp = temp->next;
    temp->next = new ListNode(5);
    temp = temp->next;
    temp->next = new ListNode(1);
    
    Solution solution;
    ListNode* deletedList = solution.removeElements(list, 1);
    ListNode* p = deletedList;
    while (p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}
