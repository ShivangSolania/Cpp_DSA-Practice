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

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;
    int n=grid.size();
    int a,b;
    int expsum=0, actualsum=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            actualsum+=grid[i][j];
            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    expsum = (n*n) * (n*n + 1)/2;
    b=expsum+a-actualsum;
    ans.push_back(b);
    return ans;
}
