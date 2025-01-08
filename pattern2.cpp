#include <iostream>
using namespace std;

int main() {
    int n=4;
    //inverted stairs
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout << " ";
        }
        for (int j=0;j<n-i;j++) {
            cout << i+1;  
        }
        cout << endl;
    }

    //inverted triangle
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout << " ";
        }
        for (int j=0;j<n-i;j++) {
            cout << i+1 << " ";  
        }
        cout << endl;
    }
}