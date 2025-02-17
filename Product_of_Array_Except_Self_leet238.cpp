#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);

    for (int i=1;i<n;i++) {
        ans[i] = ans[i-1] * nums[i-1];
    } 

    int s=1;
    for (int i=n-2;i>=0;i--) {
        s *= nums[i+1];
        ans[i] *= s;
    }
    return ans;
}