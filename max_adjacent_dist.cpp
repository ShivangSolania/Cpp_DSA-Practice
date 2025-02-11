#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 7, 2, 5};
    int n = nums.size();
    int md = 0;

    for (int i = 0; i < n; i++) {
        int dif = nums[i] - nums[(i + 1) % n];
        if (dif < 0) dif = -dif;
        if (dif > md) md = dif;
    }

    cout << md;
    return 0;
}
