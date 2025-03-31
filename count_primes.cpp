#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

//uses seive of eratosthenes

int countPrimes(int n) {
    vector<bool> isprime(n+1, true);
    int count=0;

    for (int i=2; i<n; i++) {
        if (isprime[i]) {
            count++;

            for (int j=i*2; j<n; j+=i) {
                isprime[j]=false;
            }
        }
    }

    return count;
}