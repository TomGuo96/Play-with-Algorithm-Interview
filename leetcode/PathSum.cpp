//
// Created by Tom Guo on 30/10/2017.
//

#include "leetcode.h"

bool Solution::hasPathSum(TreeNode* root, int sum) {

    if (root == NULL)
        return false;

    if (root->left == NULL && root->right == NULL)
        return root->val == sum;

   return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}