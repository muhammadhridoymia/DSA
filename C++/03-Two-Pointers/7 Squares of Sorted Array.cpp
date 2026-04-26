// Squares of a Sorted Array
// Given an integer array sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// example: nums[] = {-4, -1, 0, 3, 10} => output: {0, 1, 9, 16, 100}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;
    for (int num : nums) {
        result.push_back(num * num);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> squares = sortedSquares(nums);
    cout << "Squares of the sorted array: ";
    for (int square : squares) {
        cout << square << " ";
    }
    cout << endl;
    return 0;
}