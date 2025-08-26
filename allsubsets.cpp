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

void subs(vector<int>& nums, vector<int>& pans, vector<vector<int>>& ans, int i) {
    if(i==nums.size()) {
        ans.emplace_back(pans);
        return;
    }
    //include
    pans.push_back(nums[i]);
    subs(nums,pans,ans,i+1);

    pans.pop_back();//backtracking
    
    //exlude
    subs(nums,pans,ans,i+1);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> pans;
    vector<vector<int>> ans;
    subs(nums,pans,ans,0);
    return ans;
}