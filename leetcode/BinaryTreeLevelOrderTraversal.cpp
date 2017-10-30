//
// Created by Tom Guo on 30/10/2017.
//

#include <queue>

#include "leetcode.h"

vector<vector<int>> Solution::levelOrder(TreeNode* root) {

    vector<vector<int>> res;
    if (root == NULL)
        return res;
    queue<pair<TreeNode*, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty()) {
        TreeNode* node = q.front().first;
        int level = q.front().second;
        q.pop();
        if (level == res.size()) {
            res.push_back(vector<int>());
        }
        res.at(level).push_back(node->val);
        if (node->left)
            q.push(make_pair(node->left, level + 1));
        if (node->right)
            q.push(make_pair(node->right, level + 1));
    }
    return res;
}