//
// Created by Tom Guo on 27/10/2017.
//

#ifndef PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
#define PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H

#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 用于模拟系统栈
struct Command {
    string s; // go, print
    TreeNode* node;
    Command(string s, TreeNode* node): s(s), node(node){}
};

// Definition for a linked list node.
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
    vector<string> letterCombinations(string digits); // 17
    void findCombination(const string& digits, int index, const string& s); // 17_1
    bool isValid(string s); // 20
    ListNode* removeNthFromEnd(ListNode* head, int n); // 29
    ListNode* swapPairs(ListNode* head); // 24
    int removeElement(vector<int>& nums, int val); // 27
    vector<vector<int>> permute(vector<int>& nums); // 46
    void generatePermutation(const vector<int>& nums, int index, vector<int>& p); // 46_1
    vector<vector<string>> solveNQueens(int n); // 51
    void putQueen(int n, int index, vector<int>& row); // 51_1
    vector<string> generateBoard(int n, vector<int>& row); // 51_2
    void sortColors(vector<int>& nums); // 75
    vector<vector<int>> combine(int n, int k); // 77
    void generateCombination(int n, int k, int start, vector<int>& c); // 77_1
    bool exist(vector<vector<char>>& board, string word); // 79
    bool searchWord(const vector<vector<char>>& board, const string& word, int index, int startx, int starty); // 79_1
    vector<int> inorderTraversal(TreeNode* root); // 94
    vector<vector<int>> levelOrder(TreeNode* root); // 102
    int maxDepth(TreeNode* root); // 104
    bool hasPathSum(TreeNode* root, int sum); // 112
    vector<int> preorderTraversal(TreeNode* root); // 144
    vector<int> postorderTraversal(TreeNode* root); // 145
    vector<int> twoSum2(vector<int>& numbers, int target); // 167
    int numIslands(vector<vector<char>>& grid); // 200
    void dfs(vector<vector<char>>& grid, int x, int y); // 200_1
    ListNode* removeElements(ListNode* head, int val); // 203
    ListNode* reverseList(ListNode* head); // 206
    int minSubArrayLen(int s, vector<int>& nums); // 209
    bool containsNearbyDuplicate(vector<int>& nums, int k); // 219
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t); // 220
    TreeNode* invertTree(TreeNode* root); // 226
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q); // 235
    void deleteNode(ListNode* node); // 237
    vector<string> binaryTreePaths(TreeNode* root); // 257
    int numSquares(int n); // 279
    void moveZeroes(vector<int>& nums); // 283
    vector<int> topKFrequent(vector<int>& nums, int k); // 347
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2); // 349
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2); // 350
    int pathSum(TreeNode* root, int sum); // 437
    int findPath(TreeNode* node, int num); // 437_1
    int numberOfBoomerangs(vector<pair<int, int>>& points); // 447
    int dis(const pair<int, int>& pa, const pair<int, int>& pb); // 447_1
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D); // 454

    // TODO
    // 215 125 344 345 11
    // 438 76
    // 242 202 290 205 451
    // 3 18 16 49
    // 149 217
    // 92 83 86 328 2 445 82 21 25 147 148
    // 61 143 234
    // 150 71
    // 341 107 103 199 127 126 23 104 111
    // 100 101 222 110 404 113 129
    // 98 450 108 230 236
    // 93 131 47 37 40 216 78 90 401
    // 130 417 52 37
};

#endif //PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
