#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int st = 1, en = arr.size() - 2;

    while (st<=en) {
        int mid = st + (en - st)/2;

        if (arr[mid - 1]<arr[mid] && arr[mid]>arr[mid + 1]) {
            return mid;
        } else if (arr[mid - 1]<arr[mid]) {
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    } 
    return -1;
}