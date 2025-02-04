#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {
    int n=arr.size();
    vector<int> ans;
    int i = 0, j = n - 1; // Initialize pointers to the beginning and end of the array
    while (i < j) {
        int ps = arr[i] + arr[j];
        if (ps > target) {
            j--; // Move the end pointer left
        } else if (ps < target) {
            i++; // Move the start pointer right
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans; // Return the indices as a vector
        }
    }
    return {}; // Return an empty vector if no pair is found
}

int main() {
    vector<int> nums={2,7,11,15};
    int target=13;

    vector<int> ans= twoSum(nums,target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}