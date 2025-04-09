#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// linear search and matrix creation etc not in code
//matrix jab funcn me dalte hai usse time coloums speicfy karna imp hai cuz nhi tho compile nhi ho paiga
int maxros(int mat[][3], int r, int c) {
    //maximum row sum
    int maxs = 0;
    for (int i = 0; i<r; i++) {
        int s = 0;
        for (int j = 0; j<c; j++) {
            s+=mat[i][j];
        }
        maxs = max(maxs,s);
    }

    return maxs;
}

int maxcol(int mat[][3], int r, int c) {
    //maximum rcol sum
    int maxs = 0;
    for (int j = 0; j<c; j++) {
        int s = 0;
        for (int i = 0; i<r; i++) {
            s+=mat[i][j];
        }
        maxs = max(maxs,s);
    }

    return maxs;
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r=3,c=3;
    cout<<maxros(mat,r,c)<<endl;
    cout<<maxcol(mat,r,c);

}