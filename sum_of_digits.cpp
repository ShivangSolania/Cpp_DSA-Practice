#include <iostream>
using namespace std;

void c(int n) {
    int v=0;
    while (n!=0) {
        v+=n%10;
        n=n/10;
    }
    cout << v << endl;
}

int main() {
    int u;
    c(123);
    return 0;
}