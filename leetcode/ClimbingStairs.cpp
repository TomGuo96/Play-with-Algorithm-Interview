//
// Created by Tom Guo on 02/11/2017.
//

#include "leetcode.h"

static vector<int> memo;

int Solution::climbStairs(int n) {

    ::memo = vector<int>(n + 1, -1);
    ::memo[0] = ::memo[1] = 1;

    for (int i = 2; i <= n; i++)
        ::memo[i] = ::memo[i - 1] + ::memo[i - 2];

    return ::memo[n];
}

