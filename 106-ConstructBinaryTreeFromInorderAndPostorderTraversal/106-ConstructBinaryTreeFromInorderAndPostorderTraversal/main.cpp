//
//  main.cpp
//  106-ConstructBinaryTreeFromInorderAndPostorderTraversal
//
//  Created by 邓夏君 on 17/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};
    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
    Solution solution;
    TreeNode* tree = solution.buildTree(inorder, postorder);
    return 0;
}
