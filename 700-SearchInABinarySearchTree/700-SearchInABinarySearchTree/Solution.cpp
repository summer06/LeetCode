//
//  Solution.cpp
//  700-SearchInABinarySearchTree
//
//  Created by 邓夏君 on 23/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

TreeNode* Solution::searchBST(TreeNode* root, int val) {
    if (root == NULL) {
        return NULL;
    }
    TreeNode* t = root;
    while (t != NULL) {
        if (t->val == val) {
            return t;
        } else if (t->val > val) {
            t = t->left;
        } else if (t->val < val) {
            t = t->right;
        }
    }
    return NULL;
}
