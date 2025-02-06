#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxp=0, bestb=prices[0];

    for (int i=0; i<prices.size();i++) {
        if (prices[i]>bestb) {
            maxp=max(maxp,prices[i]-bestb);
        }
        bestb=min(bestb,prices[i]);
    }
    return maxp;
}