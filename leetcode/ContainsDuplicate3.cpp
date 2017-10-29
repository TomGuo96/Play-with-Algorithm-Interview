//
// Created by Tom Guo on 29/10/2017.
//

#include <vector>
#include <set>

#include "leetcode.h"

bool Solution::containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {

    set<long long> record;
    for (int i = 0; i < nums.size(); i++) {
        if (record.lower_bound((long long)nums[i] - (long long)t) != record.end() && *record.lower_bound((long long)nums[i] - (long long)t) <= (long long)nums[i] + (long long)t) // 处理整型溢出
               return true;
        record.insert(nums[i]);

        // 保证record中最多有K个元素
        if (record.size() == k + 1)
            record.erase(nums[i - k]);
    }
    return false;
}
