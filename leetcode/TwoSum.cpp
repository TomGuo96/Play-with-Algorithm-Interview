//
// Created by Tom Guo on 27/10/2017.
//

#include <unordered_map>

#include "leetcode.h"

vector<int> Solution::twoSum1(vector<int>& nums, int target) {

    unordered_map<int, int> record;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (record.find(complement) != record.end()) {
            int res[2] = {record[complement], i};
            return vector<int>(res, res + 2);
        }
        record[nums[i]] = i;
    }
}