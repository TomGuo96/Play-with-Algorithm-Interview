//
// Created by Tom Guo on 29/10/2017.
//

#include <iostream>

#include "leetcode.h"

using namespace std;

ListNode* createLinkedList(int arr[], int n) {

    if (n == 0)
        return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (int i = 1; i < n; i++) {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {

    ListNode* cur = head;
    while (cur != NULL) {
        cout<<cur->val<<" -> ";
        cur = cur->next;
    }
    cout<<"NULL"<<endl;
}

void deleteLinkedList(ListNode* head) {

    ListNode* cur = head;
    while (cur != NULL) {
        ListNode* del = cur;
        cur = cur->next;
        delete del;
    }
    return;
}