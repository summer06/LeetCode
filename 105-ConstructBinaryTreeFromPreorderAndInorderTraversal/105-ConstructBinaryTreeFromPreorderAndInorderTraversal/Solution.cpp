//
//  Solution.cpp
//  105-ConstructBinaryTreeFromPreorderAndInorderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
    if (preorder.size() == 0 || inorder.size() == 0) {
        return NULL;
    }
    if (preorder.size() != inorder.size()) {
        return NULL;
    }
    return build(preorder, inorder, 0, 0, inorder.size() - 1);
}

TreeNode* Solution::build(vector<int>& preorder, vector<int>& inorder, int pre_start, int in_start, int in_end) {
    if (in_start > in_end) {
        return NULL;
    }
    TreeNode* root = new TreeNode(preorder[pre_start]);
    int root_index = 0;
    for (int i = in_start; i < in_end+1; i++) {
        if (inorder[i] == root->val) {
            root_index = i;
            break;
        }
    }
    root->left = build(preorder, inorder, pre_start+1, in_start, root_index - 1);
    root->right = build(preorder, inorder, pre_start+root_index-in_start+1, root_index+1, in_end);
    return root;
}
