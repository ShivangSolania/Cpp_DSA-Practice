#include <iostream>
using namespace std;

int rev(int n) {
    int re = 0;

    while (n>0) {
        re = re*10 + n%10;
        n/=10;
    }

    return re;
}

int main() {
    int n=1234;
    cout << rev(n);
    return 0;
}