//
//  Solution.cpp
//  145-BinaryTreePostorderTraversal
//
//  Created by 邓夏君 on 16/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <vector>
#include <stack>
using namespace  std;

//递归实现
//vector<int> Solution::postorderTraversal(TreeNode* root) {
//    vector<int> tree = {};
//    if (root == NULL) {
//        return tree;
//    }
//    vector<int> leftTree = {};
//    vector<int> rightTree = {};
//    leftTree = postorderTraversal(root->left);
//    rightTree = postorderTraversal(root->right);
//    for (int i = 0; i < leftTree.size(); i++) {
//        tree.push_back(leftTree[i]);
//    }
//    for (int i = 0; i < rightTree.size(); i++) {
//        tree.push_back(rightTree[i]);
//    }
//    tree.push_back(root->val);
//    return tree;
//}

//非递归，迭代实现
vector<int> Solution::postorderTraversal(TreeNode* root) {
    vector<int> tree = {};
    if (root == NULL) {
        return tree;
    }
    TreeNode* p = root;
    stack<TreeNode*> s;
    stack<int> v;
    while(p != NULL) {
        s.push(p);
        v.push(0);
        p = p->left;
    }
    while(!s.empty()) {
        p = s.top();
        while(p->right != NULL && v.top() == 0) {
            v.pop();
            v.push(1);
            p = p->right;
            s.push(p);
            v.push(0);
            while (p->left != NULL) {
                p = p->left;
                s.push(p);
                v.push(0);
            }
        }
        p = s.top();
        tree.push_back(p->val);
        s.pop();
        v.pop();
    }
    return tree;
}
