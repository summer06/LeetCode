//
//  main.cpp
//  876-MiddleOfTheLinkedList
//
//  Created by 邓夏君 on 07/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ListNode* input = new ListNode(1);
    ListNode* temp = input;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(3);
    temp = temp->next;
    temp->next = new ListNode(4);
    temp = temp->next;
    temp->next = new ListNode(5);
    temp = temp->next;
    temp->next = new ListNode(6);
    Solution solution;
    ListNode* middle = solution.middleNode(input);
    ListNode* count = middle;
    while(count != NULL) {
        cout << count->val << " ";
        count = count->next;
    }
    cout << endl;
}
