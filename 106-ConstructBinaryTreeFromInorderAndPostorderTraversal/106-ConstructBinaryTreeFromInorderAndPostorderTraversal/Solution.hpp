//
//  Solution.hpp
//  106-ConstructBinaryTreeFromInorderAndPostorderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int post_start, int in_start, int int_end);
};

#endif /* Solution_hpp */
