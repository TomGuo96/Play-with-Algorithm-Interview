//
// Created by Tom Guo on 31/10/2017.
//

#include "leetcode.h"

static vector<vector<int>> res;

vector<vector<int>> Solution::combine(int n, int k) {

    res.clear();

    if (n <= 0 || k <= 0 || k > n)
        return ::res;

    vector<int> c;
    generateCombination(n, k, 1, c);

    return ::res;
}

void Solution::generateCombination(int n, int k, int start, vector<int>& c) {

    if (c.size() == k) {
        ::res.push_back(c);
        return;
    }

    // 还有k-c.size()个空位
    for (int i = start; i + k - c.size() - 1 <= n; i++) {
        c.push_back(i);
        generateCombination(n, k, i + 1, c);
        c.pop_back();
    }
}