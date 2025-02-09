#include <iostream>
#include <vector>
using namespace std;

//Iterative appraoch (BETTER)
int BSearch(vector<int> arr, int tar) {
    int st=0, en=arr.size()-1;

    while (st<=en) {
        int mid = st + (en - st)/2;

        if (tar>arr[mid]) {
            st=mid+1;
        } else if (tar<arr[mid]) {
            en=mid-1;
        } else {
            return mid;
        }
    }

    return -1;
}

//Recursive approach
int BSearchR(vector<int> arr, int tar, int st, int en){
    if (st<=en) {
        int mid = st + (en-st)/2;

        if (tar>arr[mid]) {
            return BSearchR(arr, tar, mid + 1, en);
        } else if (tar<arr[mid]) {
            return BSearchR(arr, tar, st, mid - 1);
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12}; //odd
    int tar1=12;
    cout << BSearch(arr1,tar1);
    vector<int> arr2 = {-1,0,3,4,5,9,12,16}; //even
    int tar2=9;

    return 0;
}