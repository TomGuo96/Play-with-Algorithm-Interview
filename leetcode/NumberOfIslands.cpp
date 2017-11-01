//
// Created by Tom Guo on 01/11/2017.
//

#include "leetcode.h"

static int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
static int m, n;
vector<vector<bool>> visited;

static bool inArea(int x, int y) {
    return x >= 0 && x < m && y >= 0 && y < n;
}

int Solution::numIslands(vector<vector<char>>& grid) {

    ::m = grid.size();
    if (::m == 0)
        return 0;
    ::n = grid[0].size();
    ::visited = vector<vector<bool>>(::m, vector<bool>(::n, false));

    int res = 0;
    for (int i = 0; i < ::m; i++)
        for (int j = 0; j < ::n; j++)
            if (grid[i][j] == '1' && !::visited[i][j]) {
                res++;
                dfs(grid, i, j);
            }
    return res;
}

void Solution::dfs(vector<vector<char>>& grid, int x, int y) {

    ::visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int newx = x + ::dir[i][0];
        int newy = y + ::dir[i][1];
        if (inArea(newx, newy) && !::visited[newx][newy] && grid[newx][newy] == '1')
            dfs(grid, newx, newy);
    }
}