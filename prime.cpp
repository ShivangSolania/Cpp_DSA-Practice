#include <iostream>
using namespace std;

int main() {
    int n;
    bool isprime = true;
    cin >> n;

    for (int i=2; i*i<=n; i++) {
        if (n%2==0) {
            isprime == false;
            break;
        }
    }

    if (isprime) {
        cout << "Number" << n << "is prime";
    } else {
        cout << "Number" << n << "is not prime";
    }
}