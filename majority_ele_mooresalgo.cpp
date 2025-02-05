#include <iostream>
#include <vector>
using namespace std;

void maxele(vector<int> arr) {
    int n=arr.size();

    //BRUTE FORCE O(n^2)
    // for (int val : arr) {
    //     int f=0;

    //     for (int j : arr) {
    //         if (val==j) {
    //             f++;
    //         }
    //     }
    //     if (f>n/2) {
    //         return val;
    //     }
    // }

    // //BETTER BY SORTING O(nLogn)
    // sort(arr.begin(),arr.end());

    // int f=1,ans=arr[0];
    // for (int i=1;i<n;i++) {
    //     if (arr[i]==arr[i-1]) {
    //         f++;
    //     } else {
    //         f=1;
    //         ans=arr[i];
    //     }
    //     if (f>n/2) {
    //         return ans;
    //     }
    // return {};
    // }

    //MOORES ALGO OF MAX ELE O(n)
    int f=0,ans=0;

    for (int i=0; i<n; i++) {
        if (f==0) {
            ans=arr[i];
        }
        if (ans == arr[i]) {
            f++;
        } else {
            f--;
        }
    }
    cout << ans;

}

int main() {
    vector<int> nums={2,2,4,2,2,7,11,15};
    maxele(nums);
    
}