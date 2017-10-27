//
// Created by Tom Guo on 27/10/2017.
//

#include <string>

#include "leetcode.h"

int Solution::lengthOfLongestSubstring(string s) {

    int freq[256] = {0};
    int l = 0, r = -1;
    int res = 0;
    while (l < s.size()) {
        if (!freq[s[r + 1]] &&  r + 1 < s.size()) {
            r++;
            freq[s[r]]++;
        } else {
            freq[s[l++]]--;
        }
        res = max(res, r - l + 1);
    }
    return res;
}