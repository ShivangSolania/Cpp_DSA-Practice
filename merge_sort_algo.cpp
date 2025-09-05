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

void merge(vector<int> &arr, int st, int mid, int en) {
    vector<int> temp;
    int i=st, j=mid+1;
    while(i<=mid && j<=en) {
        if(arr[i]<=arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=en) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0; idx<temp.size(); idx++) {
        arr[idx+st] = temp[idx];
    }
}

void mergesort(vector<int> &arr, int st, int en) {
    if(st<en) {
        int mid = st + (en-st)/2;
        mergesort(arr,st,mid); //left
        mergesort(arr,mid+1,en); //right
        merge(arr,st,mid,en);
    }
}

int main() {
    vector<int> arr = {14,15,5,25,1,15,56,21};
    mergesort(arr,0,arr.size()-1);
    for(auto val: arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}