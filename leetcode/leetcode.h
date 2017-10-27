//
// Created by Tom Guo on 27/10/2017.
//

#ifndef PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
#define PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H

#include <vector>

using namespace std;

class Solution {

public:

    int lengthOfLongestSubstring(string s); // 3
    int removeElement(vector<int>& nums, int val); // 27
    void sortColors(vector<int>& nums); // 75
    vector<int> twoSum(vector<int>& numbers, int target); // 167
    int minSubArrayLen(int s, vector<int>& nums); // 209
    void moveZeroes(vector<int>& nums); // 283

    // TODO
    // 88 215 125 344 345 11
    // 438 76
};

#endif //PLAY_WITH_ALGORITHM_INTERVIEW_LEETCODE_H
