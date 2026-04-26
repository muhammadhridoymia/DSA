// Maximum Sum Subarray of Size K (Sliding Window)
// Given an array of integers and a window size k, find the maximum sum of any contiguous subarray of size k.
// example: arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 5}, k = 4 => output: 39 (subarray {4, 2, 10, 23})

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumSubarray(vector<int>& arr, int k) {
    if (arr.size() < k) return -1; 

    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    for (size_t i = k; i < arr.size(); i++) {
        currentSum += arr[i] - arr[i - k]; 
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 5};
    int k = 4;
    int result = maxSumSubarray(arr, k);

    if (result != -1) {
        cout << "Maximum sum of a subarray of size " << k << " is: " << result << endl;
    } else {
        cout << "Window size k is larger than the array size." << endl;
    }

    return 0;
}

