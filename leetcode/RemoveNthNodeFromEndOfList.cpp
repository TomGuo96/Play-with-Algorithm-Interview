//
// Created by Tom Guo on 29/10/2017.
//

#include "leetcode.h"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {

    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;

    ListNode* p = dummyHead;
    ListNode* q = dummyHead;
    for (int i = 0; i < n + 1; i++)
        q = q->next;

    while (q != NULL) {
        p = p->next;
        q = q->next;
    }

    ListNode* del = p->next;
    p->next = del->next;
    delete del;

    ListNode* retNode = dummyHead->next;
    delete dummyHead;

    return retNode;
}