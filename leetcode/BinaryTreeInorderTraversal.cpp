//
// Created by Tom Guo on 30/10/2017.
//

#include <stack>
#include <vector>

#include "leetcode.h"

vector<int> Solution::inorderTraversal(TreeNode* root) {

    vector<int> res;
    if (root == NULL)
        return res;

    stack<Command> sk;
    sk.push(Command("go", root));
    while (!sk.empty()) {
        Command command = sk.top();
        sk.pop();
        if (command.s == "print")
            res.push_back(command.node->val);
        else {
            if (command.node->right)
                sk.push(Command("go", command.node->right));
            sk.push(Command("print", command.node));
            if (command.node->left) {
                sk.push(Command("go", command.node->left));
            }
        }
    }
    return res;

}