#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& a) {
    int pivot=-1,n=a.size();

    for (int i=n-2;i>=0;i--) {
        if (a[i]<a[i+1]) {
            pivot=i;
            break;
        }
    }

    if (pivot==-1) {
        reverse(a.begin(),a.end());
        return;
    }

    for (int i=n-1;i>pivot;i--) {
        if (a[i]>a[pivot]) {
            swap(a[i],a[pivot]);
            break;
        }
    }

    //or can do reverse(a.begin()+pivot+1,a.end());
    // reverse map leta hai as input, begin and end map dege a ka
    // whereas front and back 2st and last ele denge
    int i=pivot+1,j=n-1;
    while(i<=j) {
        swap(a[i++],a[j--]);
    }
}