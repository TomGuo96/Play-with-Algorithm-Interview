//
// Created by Tom Guo on 29/10/2017.
//

#include <vector>
#include <unordered_set>

#include "leetcode.h"

bool Solution::containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_set<int> record;
    for (int i = 0; i < nums.size(); i++) {
        if (record.find(nums[i]) != record.end())
            return true;
        record.insert(nums[i]);

        // 保证record中最多有K个元素
        if (record.size() == k + 1)
            record.erase(nums[i - k]);
    }
    return false;
}