#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool searchInrow(vector<vector<int>>& mat, int tar, int r) {
    int n=mat[0].size();
    int st=0,en=n-1;

    while(st<=en) {
        int mid = st+ (en-st)/2;

        if (tar==mat[r][mid]) {
            return true;
        } else if (tar>mat[r][mid]) {
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int tar) {
    int m = mat.size(), n=mat[0].size();
    int sr=0, er= m-1;

    while (sr<=er) {
        int midr = sr + (er-sr)/2;

        if (tar>=mat[midr][0] && tar<=mat[midr][n-1]) {
            return searchInrow(mat,tar,midr);
        } else if (tar>=mat[midr][n-1]) {
            sr = midr + 1;
        } else {
            er = midr - 1;
        }
    }
    return false;
}