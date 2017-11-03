//
// Created by Tom Guo on 03/11/2017.
//

#include "leetcode.h"

bool Solution::canPartition(vector<int>& nums) {

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];
    if (sum % 2 != 0)
        return false;
    int n = nums.size();
    int C = sum / 2;
    vector<bool> memo(C + 1, false);
    for (int i = 0; i <= C; i++)
        memo[i] = (nums[0] == i);
    for (int i = 1; i < n; i++) {
        for (int j = C; j >= nums[i]; j--)
            memo[j] = memo[j] || memo[j - nums[i]];
    }
    return memo[C];
}