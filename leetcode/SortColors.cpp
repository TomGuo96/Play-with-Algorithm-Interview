//
// Created by Tom Guo on 27/10/2017.
//

#include "leetcode.h"

// 计数排序
/*
void Solution::sortColors(vector<int>& nums) {

    int count[3] = {0}; // 存放0，1，2三个元素的频率
    for (int i = 0; i < nums.size(); i++) {
        assert(num[i] >=0 && nums[i] <= 2);
        count[nums[i]]++;
    }
    int index = 0;
    for (int i = 0; i < count[0]; i++)
        nums[index++] = 0;
    for (int i = 0; i < count[1]; i++)
        nums[index++] = 1;
    for (int i = 0; i <count[2]; i++)
        nums[index++] = 2;

}
*/

// 三路快排
void Solution::sortColors(vector<int>& nums) {

    int zero = -1, two = nums.size();
    for (int i = 0; i < two;) {
        if (nums[i] == 1)
            i++;
        else if (nums[i] == 2) {
            swap(nums[i], nums[--two]);
        } else {
            swap(nums[++zero], nums[i]);
            i++;
        }
    }

}