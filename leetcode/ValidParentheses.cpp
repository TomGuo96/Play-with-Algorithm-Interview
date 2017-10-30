//
// Created by Tom Guo on 29/10/2017.
//

#include <stack>

#include "leetcode.h"

bool Solution::isValid(string s) {

    stack<char> sk;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            sk.push(s[i]);
        else {
            if (sk.empty())
                return false;
            char ch = sk.top();
            sk.pop();
            char match;
            if (s[i] == ')')
                match = '(';
            else if (s[i] == ']')
                match = '[';
            else
                match = '{';
            if (ch != match)
                return false;
        }
    }
    if (sk.empty())
        return true;
    return false;
}