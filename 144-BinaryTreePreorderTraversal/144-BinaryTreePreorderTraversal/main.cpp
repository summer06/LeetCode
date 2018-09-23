//
//  main.cpp
//  144-BinaryTreePreorderTraversal
//
//  Created by 邓夏君 on 16/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    TreeNode* tree = new TreeNode(1);
    tree->left = new TreeNode(2);
    tree->right = new TreeNode(3);
    tree->left->left = new TreeNode(4);
    tree->left->right = new TreeNode(5);
    tree->right->left = new TreeNode(6);
    tree->right->right = new TreeNode(7);
    Solution solution;
    vector<int> treenumber = solution.preorderTraversal(tree);
    for (int i = 0; i < treenumber.size(); i++) {
        cout << treenumber[i] << " ";
    }
    cout << endl;
}
