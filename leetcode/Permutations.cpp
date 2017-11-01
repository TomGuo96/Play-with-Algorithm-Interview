//
// Created by Tom Guo on 31/10/2017.
//

#include "leetcode.h"

static vector<vector<int>> res;
static vector<bool> used;

vector<vector<int>> Solution::permute(vector<int>& nums) {

    ::res.clear();
    if (nums.size() == 0)
        return ::res;

    ::used = vector<bool>(nums.size(), false);
    vector<int> p;
    generatePermutation(nums, 0, p);
    return ::res;
}

void Solution::generatePermutation(const vector<int>& nums, int index, vector<int>& p) {

    if (index == nums.size()) {
        ::res.push_back(p);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (!::used[i]) {
            p.push_back(nums[i]);
            ::used[i] = true;
            generatePermutation(nums, index + 1, p);
            p.pop_back();
            ::used[i] = false;
        }
    }
}