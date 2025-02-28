#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPeakElement(vector<int>& a) {
    int n=a.size();
    int st = 0, en=n-1;

    if (n==0) return -1;
    if (n==1) return 0;
    if (n==2) return (a[0]>a[1]) ? 0 : 1;

    while(st<=en) {
        int mid = st + (en-st)/2;

        if ((mid==0 || a[mid-1]<a[mid]) && (mid==n-1 || a[mid]>a[mid+1])) {
            return mid;
        } else if (mid>0 && a[mid-1]>a[mid]) {
            en = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> a = {1,2,1,3,5,6,4};
    int ans = findPeakElement(a);
    cout<<"Index of peak is "<<ans;
    return 0;
}