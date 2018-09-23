//
//  main.cpp
//  105-ConstructBinaryTreeFromPreorderAndInorderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};
    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
    Solution solution;
    TreeNode* tree = solution.buildTree(preorder, inorder);
    return 0;
}
