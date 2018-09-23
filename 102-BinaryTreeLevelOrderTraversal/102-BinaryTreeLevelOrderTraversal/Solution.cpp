//
//  Solution.cpp
//  102-BinaryTreeLevelOrderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <queue>
using namespace std;

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
    vector<vector<int>> nums = {};
    if (root == NULL) {
        return nums;
    }
    int i = 0;
    queue<TreeNode*> q;
    queue<int> v;
    q.push(root);
    v.push(i);
    while (!q.empty()) {
        root = q.front();
        i = v.front();
        //需要判断是否需要开辟空间
        if(nums.size() < i+1) {
            vector<int> temp = {};
            nums.push_back(temp);
        }
        nums[i].push_back(root->val);
        q.pop();
        v.pop();
        if (root->left != NULL) {
            q.push(root->left);
            v.push(i+1);
        }
        if (root->right != NULL) {
            q.push(root->right);
            v.push(i+1);
        }
    }
    return nums;
}
