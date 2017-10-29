//
// Created by Tom Guo on 27/10/2017.
//

#ifndef PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
#define PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createLinkedList(int arr[], int n);
void printLinkedList(ListNode* head);
void deleteLinkedList(ListNode* head);

class Solution {

public:

    vector<int> twoSum1(vector<int>& nums, int target); // 1
    int lengthOfLongestSubstring(string s); // 3
    ListNode* removeNthFromEnd(ListNode* head, int n); // 29
    ListNode* swapPairs(ListNode* head); // 24
    int removeElement(vector<int>& nums, int val); // 27
    void sortColors(vector<int>& nums); // 75
    vector<int> twoSum2(vector<int>& numbers, int target); // 167
    ListNode* removeElements(ListNode* head, int val); // 203
    ListNode* reverseList(ListNode* head); // 206
    int minSubArrayLen(int s, vector<int>& nums); // 209
    bool containsNearbyDuplicate(vector<int>& nums, int k); // 219
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t); // 220
    void deleteNode(ListNode* node); // 237
    void moveZeroes(vector<int>& nums); // 283
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2); // 349
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2); // 350
    int numberOfBoomerangs(vector<pair<int, int>>& points); // 447
    int dis(const pair<int, int>& pa, const pair<int, int>& pb);
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D); // 454

    // TODO
    // 88 215 125 344 345 11
    // 438 76
    // 242 202 290 205 451
    // 3 18 16 49
    // 149 217
    // 92 83 86 328 2 445 82 21 25 147 148
    // 61 143 234
};

#endif //PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
