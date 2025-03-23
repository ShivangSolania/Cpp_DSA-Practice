#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool isfr(int f1[], int f2[]) {
    for (int i=0; i<26; i++) {
        if (f1[i]!=f2[i]) {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
   int freq[26] = {0};

   for (int i=0; i<s1.length(); i++) {
    freq[s1[i]-'a']++;
   }

   int winsi = s1.length();

   for (int i=0; i<s2.length(); i++) {
    int windid=0, idx=i;
    int windfr[26] = {0};

    while (windid < winsi && idx<s2.length()) {
        windfr[s2[idx]-'a']++;
        windid++; idx++;
    }

    if (isfr(freq, windfr)) {
        return true;
    }
   }
   return false;
}