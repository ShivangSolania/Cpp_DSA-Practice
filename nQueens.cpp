#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

bool isSafe(vector<string>&board, int row, int col, int n) {
    //vertical
    for(int j=0; j<n; j++) {
        if(board[row][j] == 'Q') {
            return false;
        }
    }
    //horizontal
    for(int i=0; i<n; i++) {
        if(board[i][col] == 'Q') {
            return false;
        }
    }
    //left diagonal
    for(int i=row, j=col; i>=0 && j>=0; i--, j--) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }
    //right daigonal
    for(int i=row, j=col; i>=0 && j<n; i--, j++) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void nQueen(vector<string>&board, int row, int n, vector<vector<string>>&ans) {
    if(row==n) {
        ans.push_back({board});
        return;
    }

    for(int j=0; j<n; j++) {
        if(isSafe(board, row, j, n)) {
            board[row][j] = 'Q'; //recursion
            nQueen(board, row+1, n, ans);
            board[row][j] = '.'; //backtracking
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n,'.')); //initializing board of dots
    vector<vector<string>> ans;
    nQueen(board, 0, n, ans);
    return ans;
}
};