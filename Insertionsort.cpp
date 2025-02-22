#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr[], int n){
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void insertionsort(int arr[], int n) {
    for (int i=0; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while (prev>=0 && arr[prev]>curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev] = curr;
    }

    printarr(arr,n);
}

int main() {
    int arr[5] = {4,1,5,2,3};
    int n = 5;
    insertionsort(arr,n);
    return 0;
}