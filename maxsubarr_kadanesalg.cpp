#include <iostream>
#include <vector>
using namespace std;

void subs() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    for(int st=0; st<n; st++) { 
        for(int end=st; end<n; end++) { 
            for(int i=st; i<=end; i++) { 
                cout << arr[i];
                } 
                cout << " ";
            } 
            cout << endl;
    }
}

int main() {
    //subs();

    // Kadane's algo MOST optimised for max subarray
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n=7, cs=0, mx=INT8_MIN;

    for (int i=0; i<n; i++) {
        cs+=arr[i];
        mx=max(cs,mx);
        if (cs<0) { //For corner cases like {-1,-2,-3,-4,-5} where all no are neg and etc
            cs=0;
        }
    }

    cout << mx;
    return 0;

}