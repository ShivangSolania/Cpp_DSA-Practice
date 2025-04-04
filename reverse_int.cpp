#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int reverse(int n) {
    int rev=0;

    while (n!=0) {
        int dig = n% 10;
        if (rev>INT32_MAX/10 || rev<INT32_MIN/10) {
            return 0;
        }
        rev = rev*10 + dig;

        n/=10;
    }

    return rev;
}