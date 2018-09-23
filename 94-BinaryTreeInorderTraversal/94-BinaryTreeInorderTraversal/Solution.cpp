//
//  Solution.cpp
//  94-BinaryTreeInorderTraversal
//
//  Created by 邓夏君 on 16/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <stack>
using namespace std;

//递归实现
//vector<int> Solution::inorderTraversal(TreeNode* root) {
//    vector<int> tree = {};
//    if (root == NULL) {
//        return tree;
//    }
//    vector<int> leftTree = {};
//    vector<int> rightTree = {};
//    leftTree = inorderTraversal(root->left);
//    int middle = root->val;
//    rightTree = inorderTraversal(root->right);
//    for (int i = 0; i < leftTree.size(); i++) {
//        tree.push_back(leftTree[i]);
//    }
//    tree.push_back(middle);
//    for (int i = 0; i < rightTree.size(); i++) {
//        tree.push_back(rightTree[i]);
//    }
//    return tree;
//}

//非递归，迭代实现
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> tree = {};
    if (root == NULL) {
        return tree;
    }
    TreeNode* p = root;
    stack<TreeNode*> s;
    while(true) {
        while(p != NULL) {
            s.push(p);
            p = p->left;
        }
        if (s.empty()) {
            return tree;
        }
        TreeNode* temp = s.top();
        tree.push_back(temp->val);
        s.pop();
        p = temp->right;
    }
    return tree;
}

