//
// Created by Tom Guo on 02/11/2017.
//

#include "leetcode.h"

/***********
 * 记忆化搜索
 ***********/

/*
static vector<int> memo;

int Solution::integerBreak(int n) {

    ::memo = vector<int>(n + 1, -1);
    return breakInteger(n);
}

// 至少把n分割为两部分，可以获得的最大值
int Solution::breakInteger(int n) {

    if (n == 1)
        return 1;

    if (::memo[n] != -1)
        return ::memo[n];

    int res = -1;
    for (int i = 1; i <= n - 1; i++)
        res = max(max(res, i * (n - i)), i * breakInteger(n - i));
    ::memo[n] = res;
    return res;
}
*/

int Solution::integerBreak(int n) {

    // memo[i]表示将数字i至少分割为两部分后得到的最大乘积
    vector<int> memo(n + 1, -1);

    memo[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= i - 1; j++)
            memo[i] = max(max(memo[i], j * (i - j)), j * memo[i - j]);
    return memo[n];
}
