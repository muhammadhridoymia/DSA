// Three Sum
// Given an array of integers, find three numbers such that they add up to a specific target number.
// example: nums[] = {-1, 0, 1, 2, -1, -4}, target = 0 => output: {-1, 0, 1}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--; 
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}


int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int target = 0;
    vector<vector<int>> triplets = threeSum(nums, target);

    cout << "Triplets that sum to " << target << ": " << endl;
    for (const auto& triplet : triplets) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}