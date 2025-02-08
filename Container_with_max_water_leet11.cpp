#include <iostream>
#include <vector>
using namespace std;

//Most optimized 2 pointer appraoch for max water
int maxArea(vector<int>& height) {
    int mwater=0;
    int lp=0,rp=height.size()-1;

    while (lp<rp) {
        int w = rp-lp;
        int h = min(height[lp],height[rp]);
        int curar=w*h;
        mwater=max(mwater,curar);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return mwater;
}