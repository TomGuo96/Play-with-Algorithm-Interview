//
// Created by Tom Guo on 27/10/2017.
//

#include "leetcode.h"

// 对撞指针
vector<int> Solution::twoSum(vector<int>& numbers, int target) {

    int l = 0, r = numbers.size() - 1;
    while (l < r) {
        if (numbers[l] + numbers[r] == target) {
            int res[2] = {l + 1, r + 1};
            return vector<int>(res, res + 2);
        }
        else if (numbers[l] + numbers[r] < target)
            l++;
        else
            r--;
    }
}