//
//  main.cpp
//  206-ReverseLinkedList
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
    for (int i = 0; i < 4; i++) {
        temp->next = new ListNode(i+2);
        temp = temp->next;
    }
    Solution solution;
    ListNode* reversed = solution.reverseList(input);
    ListNode* it = reversed;
    while(it != NULL) {
        cout << it->val << " ";
        it = it->next;
    }
    cout << endl;
}
