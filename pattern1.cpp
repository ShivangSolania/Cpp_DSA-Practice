#include <iostream>
using namespace std;

int main() {
    char a='A';
    int n = 4;
    int t=1;
    //For square
    // for (int i=0;i<n;i++) {
    //     for (int j=0;j<n;j++) {
    //         cout << a;
    //         a+=1;
    //     }
    //     cout << endl;
    // }
    // //For stairs
    // for (int i=0;i<n;i++) {
    //     for (int j=0;j<i+1;j++) {
    //         cout << a;
    //     }
    //     a+=1;
    //     cout << endl;
    // } 

    //For abc stairs
    // for (int i=0;i<n;i++) {
    //     a='A';
    //     for (int j=0;j<i+1;j++) {
    //         cout << a;
    //         a+=1;
    //     }
    //     cout << endl;
    // }  

    //Reverse stairs
    // for (int i=0;i<n;i++) {
    //     for (int j=i+1;j>0;j--) {
    //         cout << j;
    //     }
    //     cout << endl;
    // } 

    //For increasing number
    for (int i=0;i<n;i++) {
        for (int j=0;j<i+1;j++) {
            cout << t;
            t+=1;
        }
        cout << endl;
    }
}