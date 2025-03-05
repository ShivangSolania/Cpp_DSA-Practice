#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    int st=0, en=s.length()-1;
    while(st<en) {
        if (!isalnum(s[st])) {
            st++;
            continue;
        }
        if (!isalnum(s[en])) {
            en--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[en])) {
            return false;
        }
        st++; en--;
    }

    return true;
}