
//Given an integer array nums, find the subarray with the largest sum, and return its sum.




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> v(n);
    v[0] = nums[0];
    int ans = v[0];
    for (int i = 1; i < n; i++) {
        v[i] = max(nums[i], nums[i] + v[i - 1]);
        ans = max(ans, v[i]);
    }
    return ans;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;  
}
