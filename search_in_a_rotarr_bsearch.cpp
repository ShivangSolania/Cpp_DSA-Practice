#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int tar = 0;
    int st = 0, en = nums.size()-1;

    while (st <= en) {
        int mid = st + (en - st)/2;

        if (nums[mid] == tar) {
            return mid;
        }

        if (nums[st] <= nums[mid]) {
            if (nums[st] <= tar && tar <= nums[mid]) {
                en = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if (nums[mid] <= tar && tar <= nums[en]) {
                st = mid + 1;
            } else {
                en = mid - 1;
            }
        }
    }

    return -1;
    
}