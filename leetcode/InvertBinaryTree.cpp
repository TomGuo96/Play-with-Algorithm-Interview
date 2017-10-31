//
// Created by Tom Guo on 30/10/2017.
//

#include "leetcode.h"

TreeNode* Solution::invertTree(TreeNode* root) {

    if (root == NULL)
        return NULL;
    invertTree(root->left);
    invertTree(root->right);
    swap(root->left, root->right);
    return root;
}