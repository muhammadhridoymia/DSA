// Find Missing Number
//example: arr[] = {1, 2, 4, 5}, n = 5 => output: 3 (missing number)

#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
    return 0;
}