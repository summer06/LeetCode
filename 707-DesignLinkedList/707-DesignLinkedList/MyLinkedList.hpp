//
//  MyLinkedList.hpp
//  707-DesignLinkedList
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef MyLinkedList_hpp
#define MyLinkedList_hpp

#include <stdio.h>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList();
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index);
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val);
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val);
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val);
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index);
    
    void printList();
private:
    ListNode* list;
    int length;
};

#endif /* MyLinkedList_hpp */
