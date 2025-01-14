#include <iostream>
using namespace std;

int DecToBin(int n) {
    int ans = 0, p = 1;

    while (n > 0) {
        int rem = n % 2;
        n /= 2;
        ans += rem * p;
        p *= 10;
    }

    return ans;
}

int BinToDec(int n) {
    int ans = 0, p = 1;

    while (n > 0) {
        int rem = n % 10;
        ans += rem * p;
        n /= 10;
        p *= 2;
    }

    return ans;
}

int main() {
    int n1 = 5, n2 = 101;
    cout << "Bin = " << DecToBin(n1) << endl;
    cout << "Dec = " << BinToDec(n2) << endl    ;
    return 0;
}