// Two Sum (Two Pointers)
// Given an array of integers and a target sum, find two numbers in the array that add up to the target sum.
// example: nums[] = {2, 7, 11, 15}, target = 9 => output: {0, 1} (indices of the two numbers)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            result.push_back(left);
            result.push_back(right);
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = twoSum(nums, target);

    if (!indices.empty()) {
        cout << "Indices of the two numbers that add up to " << target << ": [" << indices[0] << ", " << indices[1] << "]" << endl;
    } else {
        cout << "No two numbers found that add up to " << target << "." << endl;
    }

    return 0;
}