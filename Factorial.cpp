#include <iostream>
using namespace std;

int fac(int n) {
    int f = 1;
    for (int i=1;i<=n;i++) {
        f*=i;
    }
    return f;
}

int main() {
    int n=6,r=3;

    int fact_n = fac(n);
    int fact_r = fac(r);
    int fact_nr = fac(n-r);

    cout << "nCr = " << fact_n/(fact_r*fact_nr);

    return 0;
}