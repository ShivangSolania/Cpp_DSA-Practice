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

bool isSafe(vector<vector<char>> &board, int row, int col, int dig) {
    //horizontal
    for(int i=0; i<9; i++) {
        if(board[i][col]==dig) {
            return false;
        }
    }
    //vertical
    for(int j=0; j<9; j++) {
        if(board[row][j]==dig) {
            return false;
        }
    }
    //grid 3*3
    int srow = (row/3)*3;
    int scol = (col/3)*3;

    for(int i=srow; i<=srow+2; i++) {
        for (int j=scol; j<=scol+2; j++) {
            if (board[i][j]==dig) {
                return false;
            }
        }
    }

    return true;
}

bool SudokuSolver(vector<vector<char>> &board, int row, int col) {
    if (row==9) {//reaches end
        return true;
    }
    // for next row and col
    int nextRow = row, nextCol = col+1;
    if (nextCol==9) {
        nextRow = row+1;
        nextCol = 0;

    }

    if (board[row][col] != '.') {
        return SudokuSolver(board, nextRow, nextCol);
    }
    //getting char 1-9 and checking if the posi is safe
    for (char dig = '1'; dig<='9'; dig++) {
        if (isSafe(board, row, col, dig)) {
            board[row][col]=dig;
            if(SudokuSolver(board, nextRow, nextCol)) {//recusion if safe, returned true so that we know its placed
                return true;
            }
            board[row][col]='.';//backtracking if placed in incorrect posi
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    SudokuSolver(board,0,0);
}