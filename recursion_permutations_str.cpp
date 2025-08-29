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

void getPerms(vector<string>& nums, int idx) {
    if (idx==nums.size()) {
        for (auto c: nums) {
            cout<<c<<" ";
        }
        cout<<endl;
        return;
    }

    for (int i=idx; i<nums.size(); i++) {
        swap(nums[idx],nums[i]);
        getPerms(nums,idx+1);
        swap(nums[idx],nums[i]);
    }
}

int main() {
    vector<string> str = {"a","b","c"};
    getPerms(str,0);
    return 0;
}