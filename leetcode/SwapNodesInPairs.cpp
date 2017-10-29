//
// Created by Tom Guo on 29/10/2017.
//
#include "leetcode.h"

ListNode* Solution::swapPairs(ListNode* head) {

    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;

    ListNode* p = dummyHead;
    while (p->next && p->next->next) {
        ListNode* node1 = p->next;
        ListNode* node2 = node1->next;
        ListNode* next = node2->next;

        node2->next = node1;
        node1->next = next;
        p->next = node2;

        p = node1;
    }

    ListNode* retNode = dummyHead->next;
    delete dummyHead;

    return retNode;
}