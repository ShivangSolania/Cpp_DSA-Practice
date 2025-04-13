#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int diags(int mat[][3], int n) {
    int s=0;
    for (int i=0; i<n; i++) {
        s+=mat[i][i];
        if (i!=n-i-1) {
            s+=mat[i][n-i-1];
        }
    }

    return s;
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diags(mat,n);

}