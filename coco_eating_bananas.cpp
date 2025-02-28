#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int isvalid(vector<int>& p, int m, int h) {
    long long s=0;
    for (int i=0; i<p.size();i++) {
        s+=ceil((double)p[i]/m);
    }

    if (h>=s) {
        return true;
    } else {
        return false;
    }
}

int minEatingSpeed(vector<int>& p, int h) {
    int st=1, en=*max_element(p.begin(),p.end()), ans=-1;

    while (st<=en) {
        int mid = st + (en-st)/2;

        if (isvalid(p,mid,h)) {
            en = mid-1;
            ans=mid;
        } else {
            
            st=mid+1;
        }
    }

    return ans;
}

int main() {
    vector<int> p = {30,11,23,4,20};
    int m=5;
    int a=minEatingSpeed(p,m);
    cout<<a;
}