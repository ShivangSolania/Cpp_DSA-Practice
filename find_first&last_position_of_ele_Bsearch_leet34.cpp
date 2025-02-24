#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> searchRange(vector<int>& nums, int tar) {
    vector<int> a = {-1,-1};
    int n = nums.size();
    int st=0, en=n-1;

    while(st<=en) { //for first ele
        int mid = st + (en-st)/2;

        if (nums[mid]>=tar) {
            en = mid-1;
        } else {
            st = mid+1;
        }
    }

    if (st<n && nums[st] == tar) {
        a[0]=st;
    } else {
        return a;
    }

    en = nums.size()-1;

    while(st<=en) { //for last ele
        int mid = st + (en-st)/2;

        if (nums[mid]<=tar) {
            st = mid+1;
        } else {
            en = mid-1;
        }
    }

    a[1]=en;
    return a;
}

