#include <iostream>
using namespace std;

double myPow(double x = 2.00000, int n = 10) {
    if (n==0) return 1.0;
    if (x==0) return 0.0;
    if (x==1) return 1.0;
    if (x==-1 && n%2==0) return 1.0;
    if (x==-1 && n%2!=0) return -1.0;

    long binf=n;
    if (n<0) {
        x=1/x;
        binf=-binf;
    }
    double ans=1.0;

    while (binf > 0) {           //This converts the power to binary and multipliee the number in the powers to 2
        if (binf % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binf /= 2;
    }

    return ans;
}