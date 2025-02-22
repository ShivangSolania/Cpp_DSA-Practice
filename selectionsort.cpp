#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr[], int n){
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void selectionsort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int smallestindex = i;

        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[smallestindex]) {
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
    }

    printarr(arr,n);
}

int main() {
    int arr[5] = {4,1,5,2,3};
    int n = 5;
    selectionsort(arr,n);
    return 0;
}