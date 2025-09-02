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

set<vector<int>> s;

void getAllCombinations(vector<int>& arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combi) {
    if(idx==arr.size() || tar<0) {
        return;
    }
    if(tar==0) {
        if(s.find(combi)==s.end()) {
            ans.push_back({combi});
            s.insert(combi);
        }
        return;
    }

    combi.push_back(arr[idx]);

    //single
    getAllCombinations(arr, idx+1, tar-arr[idx], ans, combi);

    //multiple
    getAllCombinations(arr, idx, tar-arr[idx], ans, combi);

    //exclude
    combi.pop_back();
    getAllCombinations(arr, idx+1, tar, ans, combi);
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> combi;
    getAllCombinations(arr, 0, target, ans, combi);
    return ans;
}