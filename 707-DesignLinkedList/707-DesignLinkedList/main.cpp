//
//  main.cpp
//  707-DesignLinkedList
//
//  Created by 邓夏君 on 09/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "MyLinkedList.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    MyLinkedList linkedList;
    linkedList.addAtHead(1);
    linkedList.printList();
//    linkedList.addAtTail(3);
//    linkedList.printList();
    linkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
    linkedList.printList();
    cout << linkedList.get(1) << endl;;            // returns 2
//    linkedList.deleteAtIndex(1);  // now the linked list is 1->3
//    linkedList.printList();
    cout << linkedList.get(0) << endl;            // returns 3
    cout << linkedList.get(2) << endl;
}
