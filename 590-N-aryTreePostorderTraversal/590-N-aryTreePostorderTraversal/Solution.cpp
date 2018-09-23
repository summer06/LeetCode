//
//  Solution.cpp
//  590-N-aryTreePostorderTraversal
//
//  Created by 邓夏君 on 23/09/2018.
//  Copyright © 2018 Summer. All rights reserved.
//

#include "Solution.hpp"

//递归
vector<int> Solution::postorder(Node* root) {
    vector<int> post = {};
    if (root == NULL) {
        return post;
    }
    vector<vector<int>> subPost = {};
    for (int i = 0; i < root->children.size(); i++) {
        vector<int> tempPost = postorder(root->children[i]);
        subPost.push_back(tempPost);
    }
    for (int i = 0; i < subPost.size(); i++) {
        for (int j = 0; j < subPost[i].size(); j++) {
            post.push_back(subPost[i][j]);
        }
    }
    post.push_back(root->val);
    return post;
}
