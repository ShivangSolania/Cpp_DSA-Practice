#include <iostream>
using namespace std;


bool p2(int n) {
    return n > 0 && (n & (n-1)) == 0;
}

int main() {
    int n = 4;
    if (p2(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}