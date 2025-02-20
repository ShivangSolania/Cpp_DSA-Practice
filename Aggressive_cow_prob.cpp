#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(vector<int> &arr, int n, int c, int minallowed) {
    int cows=1,laststallpos=arr[0];
    for (int i=0; i<n;i++) {
        if (arr[i]-laststallpos >=minallowed) {
            cows++;
            laststallpos = arr[i];
        }

        if (cows==c) {
            return true;
        }
    }

    return false;
}

int getdist(vector<int> &arr, int n, int c) {
    sort(arr.begin(), arr.end());

    int st=1,en=arr[n-1]-arr[0], ans=-1;

    while (st<=en) {
        int mid = st + (en-st)/2;

        if (isvalid(arr,n,c,mid)) {
            ans = mid;
            st=mid+1;
        } else {
            en=mid-1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,8,4,9};
    int n=5,c=3;
    cout<<getdist(arr,n,c);
    return 0;
}