#include <iostream>
#include <vector>

#include "leetcode/leetcode.h"

using namespace std;

int main() {

    Solution s;

    vector<pair<int, int>> vi;
    vi.push_back(make_pair(0, 0));
    vi.push_back(make_pair(1, 0));
    vi.push_back(make_pair(2, 0));
    cout<<s.numberOfBoomerangs(vi);
    cout<<endl;
}
