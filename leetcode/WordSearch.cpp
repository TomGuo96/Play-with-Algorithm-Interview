//
// Created by Tom Guo on 31/10/2017.
//

#include "leetcode.h"

static int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
static int m, n;
static vector<vector<bool>> visited;

static bool isArea(int x, int y)  {
    return x >= 0 && x < m && y >= 0 && y < n;
}

bool Solution::exist(vector<vector<char>>& board, string word) {

    ::m = board.size();
    ::n = board[0].size();
    ::visited = vector<vector<bool>>(::m, vector<bool>(::n, false));

    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[i].size(); j++) {
            if (searchWord(board, word, 0, i, j))
                return true;
        }
    return false;
}

bool Solution::searchWord(const vector<vector<char>>& board, const string& word, int index, int startx, int starty) {

    if (index == word.size() - 1)
        return board[startx][starty] == word[index];

    if (board[startx][starty] == word[index]) {
        ::visited[startx][starty] = true;
        for (int i = 0; i < 4; i++) {
            int newx = startx + ::dir[i][0];
            int newy = starty + ::dir[i][1];
            if (::isArea(newx, newy) && !::visited[newx][newy] && searchWord(board, word, index + 1, newx, newy))
                return true;
        }
        ::visited[startx][starty] = false;
    }
    return false;
}