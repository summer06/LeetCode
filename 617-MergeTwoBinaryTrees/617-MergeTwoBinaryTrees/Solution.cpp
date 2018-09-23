//
//  Solution.cpp
//  617-MergeTwoBinaryTrees
//
//  Created by 邓夏君 on 16/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"
#include <stack>
using namespace std;

TreeNode* Solution::mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (t1 == NULL) {
        return t2;
    }
    if (t2 == NULL) {
        return t1;
    }
    t1->val += t2->val;
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    return  t1;
}
