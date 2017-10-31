//
// Created by Tom Guo on 30/10/2017.
//

#include "leetcode.h"

int Solution::pathSum(TreeNode* root, int sum) {

    if (root == NULL)
        return 0;

    int res = findPath(root, sum);
    res += pathSum(root->left, sum);
    res += pathSum(root->right, sum);

    return res;
}

int  Solution::findPath(TreeNode* node, int num) {

    if (node == NULL)
        return 0;

    int res = 0;
    if (node->val == num)
        res += 1;

    res += findPath(node->left, num - node->val);
    res += findPath(node->right, num - node->val);
    return res;
}