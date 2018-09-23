//
//  Solution.cpp
//  144-BinaryTreePreorderTraversal
//
//  Created by 邓夏君 on 16/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <stack>

//递归方法
//vector<int> Solution::preorderTraversal(TreeNode* root) {
//    vector<int> tree = {};
//    if (root == NULL) {
//        return tree;
//    }
//    tree.push_back(root->val);
//    vector<int> leftTree = {};
//    vector<int> rightTree = {};
//    leftTree = preorderTraversal(root->left);
//    rightTree = preorderTraversal(root->right);
//    for (int i = 0; i < leftTree.size(); i++) {
//        tree.push_back(leftTree[i]);
//    }
//    for (int i = 0; i < rightTree.size(); i++) {
//        tree.push_back(rightTree[i]);
//    }
//    return tree;
//}

//迭代方法
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int> tree = {};
    if (root == NULL) {
        return tree;
    }
    stack<TreeNode*> S;
    S.push(root);
    while(!S.empty()) {
        TreeNode* temp = S.top();
        S.pop();
        tree.push_back(temp->val);
        if (temp->right != NULL) {
            S.push(temp->right);
        }
        if (temp->left != NULL) {
            S.push(temp->left);
        }
    }
    return tree;
}
