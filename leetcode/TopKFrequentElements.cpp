//
// Created by Tom Guo on 30/10/2017.
//

#include <unordered_map>
#include <queue>

#include "leetcode.h"

vector<int> Solution::topKFrequent(vector<int>& nums, int k) {

    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;

    // 扫描freq，维护当前出现最高的k个元素
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // （频率，元素）的形式
    for (unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
        if (pq.size() == k) {
            if (it->second > pq.top().first) {
                pq.pop();
                pq.push(make_pair(it->second, it->first));
            }
        } else
            pq.push(make_pair(it->second, it->first));
    }

    vector<int> res;
    while (!pq.empty()) {
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}