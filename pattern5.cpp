#include <iostream>
using namespace std;

int main() {
    int n=4;
    //TOP
    for (int i=0;i<=n;i++) {
        for (int j=0;j<i;j++) {
            cout << "*";
        }
        for (int j=0;j<2*(n-i);j++) {
            cout << " ";
        }
        for (int j=0;j<i;j++) {
            cout << "*";
        }
        cout << endl;
    }

    //BOTTOM
    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            cout << "*";
        }
        for (int j=0;j<2*i;j++) {
            cout << " ";
        }
        for (int j=0;j<n-i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}