#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& arr, int tar) {
    unordered_map<int,int> m;
    vector<int> ans;
    for (int i=0; i<arr.size();i++) {
        int fir = arr[i];
        int sec = tar - fir;
        if (m.find(sec) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[fir]=i;
    }

    return ans;
}