//
//  main.cpp
//  92-ReverseLinkedListII
//
//  Created by 邓夏君 on 10/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(3);
    temp = temp->next;
    temp->next = new ListNode(4);
    temp = temp->next;
    temp->next = new ListNode(5);
    Solution solution;
    ListNode* reversed = solution.reverseBetween(head, 2, 5);
    ListNode* p = reversed;
    while(p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}
