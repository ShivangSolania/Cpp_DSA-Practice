#include <iostream>
using namespace std;

int revar(int arr[],int n) {
    int s=0, e=n-1;
    while(s<e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int ma_mi(int arr[],int n) {
    int ma=arr[0],mi=arr[0];
    for (int i=0;i<n;i++) {
        ma = max(arr[i],ma);
        mi = min(arr[i],mi);
    }
    return ma,mi;
}

int inter(int arr1[], int arr2[], int n) {
    bool ch=true;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i]==arr2[j]) {
                ch=false;
                break;
            }
        }
        if (ch) {
            return i;
        }
    }

    return 0;
}

void uni(int arr[], int n) {
    bool c=true;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                c=false;
            }
        }
        if (c) {
            cout << i << endl;
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,3,2,2,4,6};
    int n = 6;
    revar(arr,n);
    uni(arr,n);
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}