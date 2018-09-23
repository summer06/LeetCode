//
//  Solution.hpp
//  590-N-aryTreePostorderTraversal
//
//  Created by 邓夏君 on 23/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include <vector>
using namespace std;


 // Definition for a Node.
class Node {
public:
int val;
vector<Node*> children;

Node() {}

Node(int _val, vector<Node*> _children) {
val = _val;
children = _children;
}
};

class Solution {
public:
    vector<int> postorder(Node* root);
};

#endif /* Solution_hpp */
