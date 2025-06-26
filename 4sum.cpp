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

vector<vector<int>> fourSum(vector<int>& n, int tar) {
    vector<vector<int>> ans;
    sort(n.begin(),n.end());
    int s = n.size();

    for (int i=0; i<s; i++) {
        if(i>0 && n[i]==n[i-1]) continue;

        for (int j=i+1; j<s; ) {
            int p=j+1, q=s-1;

            while (p<q) {
                long long sum = (long long)n[i] + (long long)n[j] + (long long)n[p] + (long long)n[q];

                if (sum<tar) {
                    p++;
                } else if (sum>tar) {
                    q--;
                } else {
                    ans.push_back({n[i],n[j],n[p],n[q]});
                    p++;q--;

                    while (p<q && n[p]==n[p-1]) p++;
                }
            }

            j++;
            while (j<s && n[j]==n[j-1]) j++;
        }
    }
    return ans;
}