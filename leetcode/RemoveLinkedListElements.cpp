//
// Created by Tom Guo on 29/10/2017.
//

#include "leetcode.h"

// 虚拟头节点
ListNode* Solution::removeElements(ListNode* head, int val) {

    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;

    ListNode* cur = dummyHead;
    while (cur->next != NULL) {
        if (cur->next->val == val) {
            ListNode* del = cur->next;
            cur->next = del->next;
            delete del;
        } else
            cur = cur->next;
    }

    ListNode* retNode = dummyHead->next;
    delete dummyHead;

    return retNode;
}