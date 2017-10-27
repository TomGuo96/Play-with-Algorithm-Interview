//
// Created by Tom Guo on 27/10/2017.
//

#include "leetcode.h"

int Solution::removeElement(vector<int>& nums, int val) {

    int k = -1; // k表示结果数组的最后一个元素的位置
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val)
            nums[++k] = nums[i];
    }
    return k + 1;
}