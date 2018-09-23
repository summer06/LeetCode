//
//  Solution.cpp
//  106-ConstructBinaryTreeFromInorderAndPostorderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

TreeNode* Solution::buildTree(vector<int>& inorder, vector<int>& postorder) {
    if (inorder.size() == 0 || postorder.size() == 0) {
        return NULL;
    }
    if (inorder.size() != postorder.size()) {
        return NULL;
    }
    return build(inorder, postorder, postorder.size() - 1, 0, inorder.size() - 1);
}

TreeNode* Solution::build(vector<int>& inorder, vector<int>& postorder, int post_start, int in_start, int in_end) {
    if (in_start > in_end) {
        return NULL;
    }
    TreeNode* root = new TreeNode(postorder[post_start]);
    int root_index = 0;
    for (int i = in_start; i < in_end+1; i++) {
        if (inorder[i] == root->val) {
            root_index = i;
            break;
        }
    }
    root->right = build(inorder, postorder, post_start-1, root_index+1, in_end);
    root->left =  build(inorder, postorder, post_start-(in_end-root_index)-1, in_start, root_index-1);
    return root;
}
