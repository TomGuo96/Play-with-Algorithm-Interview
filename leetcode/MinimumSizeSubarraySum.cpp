//
// Created by Tom Guo on 27/10/2017.
//

#include "leetcode.h"

// 滑动窗口
int Solution::minSubArrayLen(int s, vector<int>& nums) {

    int l = 0, r = -1; // nums[l...r]为滑动窗口
    int sum = 0;
    int res = nums.size() + 1;

    while (l < nums.size()) {
        if (sum < s && r + 1 < nums.size()) {
            r++;
            sum += nums[r];
        } else {
            sum -= nums[l++];
        }
        if (sum >= s)
            res = min(res, r - l + 1);
    }

    if (res == nums.size() + 1)
        return 0;
    return res;
}