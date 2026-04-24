// Kadane’s Algorithm
//example: arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4} => output: 6 (maximum sum of contiguous subarray)

#include <iostream>
#include <algorithm>
using namespace std;

int kadaneAlgorithm(int arr[], int n) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum of contiguous subarray is: " << kadaneAlgorithm(arr, n) << endl;
    return 0;
}