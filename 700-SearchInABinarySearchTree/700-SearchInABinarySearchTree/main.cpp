//
//  main.cpp
//  700-SearchInABinarySearchTree
//
//  Created by 邓夏君 on 23/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    TreeNode* root = new TreeNode(4);
    TreeNode* temp = root;
    temp->left = new TreeNode(2);
    temp->right = new TreeNode(7);
    temp = temp->left;
    temp->left = new TreeNode(1);
    temp->right = new TreeNode(3);
    Solution solution;
    TreeNode* subTree = solution.searchBST(root, 5);
    return 0;
}
