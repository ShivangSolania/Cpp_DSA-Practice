#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxallowed) {
    int painters=1,time=0;
    for (int i=0; i<n;i++) {
        if (arr[i]>maxallowed) {
            return false;
        }

        if (time+arr[i]<=maxallowed) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }

    return painters<=m ? true : false;
}

int mintime(vector<int> &arr, int n, int m) {
    if (m>n) {
        return -1;
    }

    int sum = 0, maxv=INT16_MIN;
    for (int i=0;i<n;i++) {
        sum+=arr[i];
        maxv=max(maxv,arr[i]);
    }

    int st=maxv,en=sum, ans=-1;

    while (st<=en) {
        int mid = st + (en-st)/2;

        if (isvalid(arr,n,m,mid)) {
            ans = mid;
            en = mid-1;
        } else {
            st = mid+1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {40,30,10,20};
    int n=4,m=2;
    cout<<mintime(arr,n,m);
    return 0;
}