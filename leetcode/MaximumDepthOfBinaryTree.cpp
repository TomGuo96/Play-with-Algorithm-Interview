//
// Created by Tom Guo on 30/10/2017.
//

#include "leetcode.h"

int Solution::maxDepth(TreeNode* root) {

    if (root == NULL)
        return 0;
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}