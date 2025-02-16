#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxallowed) {
    int stu=1,pages=0;
    for (int i=0; i<n;i++) {
        if (arr[i]>maxallowed) {
            return false;
        }

        if (pages+arr[i]<=maxallowed) {
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }
    }

    return stu>m ? false : true;
}

int allocatebooks(vector<int> &arr, int n, int m) {
    if (m>n) {
        return -1;
    }

    int sum = 0;
    for (int i=0;i<n;i++) {
        sum+=arr[i];
    }

    int ans=-1;
    int st=0,en=sum;

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
    vector<int> arr = {2,1,3,4};
    int n=4,m=2;
    cout<<allocatebooks(arr,n,m);
    return 0;
}