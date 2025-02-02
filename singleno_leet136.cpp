#include <iostream>
#include <vector>
using namespace std;

int singleNumber() {
    vector<int> &vec = {4,1,2,1,2};
    int a=0;
    for (int i : vec) {
        a = a^i;
    }

    return a;
}

int main() {
    cout << singleNumber();
    return 0;
}