//
// Created by Tom Guo on 03/11/2017.
//

#include "leetcode.h"

/*********
 * 动态规划
 *********/

/*
static bool compare(const Interval& a, const Interval& b) {
    if (a.start != b.start)
        return a.start < b.start;
    return a.end < b.end;
}

int Solution::eraseOverlapIntervals(vector<Interval>& intervals) {

    if (intervals.size() == 0)
        return 0;

    sort(intervals.begin(), intervals.end(), ::compare);

    vector<int> memo(intervals.size(), 1); // memo[i]表示intervals[0...i]可以构成的最长的不重叠的区间序列
    for (int i = 1; i < intervals.size(); i++)
        for (int j = 0; j < i; j++)
            if (intervals[i].start >= intervals[j].end)
                memo[i] = max(memo[i], 1 + memo[j]);
    int res = 0;
    for (int i = 0; i < memo.size(); i++)
        res = max(res, memo[i]);
    return intervals.size() - res;
}
*/

/*********
 * 贪心算法
 *********/

static bool compare(const Interval& a, const Interval& b) {
    if (a.end != b.end)
        return a.end < b.end;
    return a.start < b.start;
}

int Solution::eraseOverlapIntervals(vector<Interval>& intervals) {

    if (intervals.size() == 0)
        return 0;

    sort(intervals.begin(), intervals.end(), ::compare);

    int res = 1;
    int pre = 0;
    for (int i = 1; i < intervals.size(); i++)
        if (intervals[i].start >= intervals[pre].end) {
            res++;
            pre = i;
        }
    return intervals.size() - res;
}