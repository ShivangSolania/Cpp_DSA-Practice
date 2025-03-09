#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& n, int tar) {
    int i=0, j=n.size()-1;

    while(i<j) {
        if (n[i]+n[j]>tar) {
            j--;
        } else if (n[i]+n[j]<tar) {
            i++;
        } else {
            return {i+1,j+1};
        }
    }

    return {};
}

int main() {
    vector<int> n = {2,7,11,15};
    int tar=9;
    vector<int> a = twoSum(n,tar);
    for (auto i: a) {
        cout<<i<<" ";
    }
}