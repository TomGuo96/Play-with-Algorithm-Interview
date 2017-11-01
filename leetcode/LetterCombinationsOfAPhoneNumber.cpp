//
// Created by Tom Guo on 31/10/2017.
//

#include "leetcode.h"

const string letterMap[10] = {
        " ",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
};

static vector<string> res;

vector<string> Solution::letterCombinations(string digits) {

    ::res.clear();
    if (digits.empty())
        return ::res;
    findCombination(digits, 0, "");
    return ::res;
}

void Solution::findCombination(const string& digits, int index, const string& s) {

    if (index == digits.size()) {
        ::res.push_back(s);
        return;
    }

    char c = digits[index];
    string letters = ::letterMap[c - '0'];
    for (int i = 0; i < letters.size(); i++) {
        findCombination(digits, index + 1, s + letters[i]);
    }

    return;
}