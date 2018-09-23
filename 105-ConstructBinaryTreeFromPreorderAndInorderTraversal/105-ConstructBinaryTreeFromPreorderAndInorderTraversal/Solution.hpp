//
//  Solution.hpp
//  105-ConstructBinaryTreeFromPreorderAndInorderTraversal
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int pre_start, int in_start, int length);
};

#endif /* Solution_hpp */
