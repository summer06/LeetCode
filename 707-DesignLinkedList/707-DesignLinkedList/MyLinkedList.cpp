//
//  MyLinkedList.cpp
//  707-DesignLinkedList
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "MyLinkedList.hpp"
#include <iostream>
using namespace std;

MyLinkedList::MyLinkedList() {
    list = NULL;
    length = 0;
}

int MyLinkedList::get(int index) {
    if(index < 0 || index >= length) {
        return -1;
    }
    ListNode* p = list;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    return p->val;
}

void MyLinkedList::addAtHead(int val) {
    ListNode* head = new ListNode(val);
    if (list == NULL) {
        list = head;
    } else {
        ListNode* temp = list;
        head->next = temp;
        list = head;
    }
    length++;
}

void MyLinkedList::addAtTail(int val) {
    ListNode* tail = new ListNode(val);
    if (list == NULL) {
        list = tail;
    } else {
        ListNode* p = list;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tail;
    }
    length++;
}

void MyLinkedList::addAtIndex(int index, int val) {
    if (index > length || index < 0) {
        return;
    }
    ListNode* node = new ListNode(val);
    if (index == 0) {
        addAtHead(val);
        return;
    }
    if (index == length) {
        addAtTail(val);
        return;
    }
    ListNode* p = list;
    for (int i = 0; i < index - 1; i++) {
        p = p->next;
    }
    node->next = p->next;
    p->next = node;
    length++;
    return;
}

void MyLinkedList::deleteAtIndex(int index) {
    if (index < 0 || index >= length) {
        return;
    }
    ListNode* p = list;
    for (int i = 0; i < index - 1; i++) {
        p = p->next;
    }
    ListNode* temp = p->next;
    p->next = temp->next;
    length--;
    return;
}

void MyLinkedList::printList() {
    ListNode* p = list;
    for (int i = 0; i < length; i++) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}
