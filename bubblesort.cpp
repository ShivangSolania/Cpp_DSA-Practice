#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr[], int n){
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void bubblesort(int arr[], int n) {
    bool isSwap = false;

    for (int i=0; i<n-1; i++) {
        for (int j=i; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }

        if (!isSwap) {
            return;
        }
    }
    printarr(arr,n);
}

int main() {
    int arr[5] = {4,1,5,2,3};
    int n = 5;
    bubblesort(arr,n);
    return 0;
}