//
// Created by Tom Guo on 29/10/2017.
//

#include "leetcode.h"

// 特殊情况下可以改变节点的值
void Solution::deleteNode(ListNode* node) {

    if (!node)
        return;
    if (!node->next) {
        delete node;
        node = NULL;
        return;
    }
    node->val = node->next->val;
    ListNode* del = node->next;
    node->next = del->next;

    delete del;
}