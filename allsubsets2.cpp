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

void getallsubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>> &allsubs) {
    if (i==nums.size()) {
        allsubs.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    getallsubs(nums,ans,i+1,allsubs);
    ans.pop_back();
    int idx = i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
    getallsubs(nums,ans,idx,allsubs);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> allsubs;
    vector<int> ans;
    getallsubs(nums,ans,0,allsubs);
    return allsubs;
}