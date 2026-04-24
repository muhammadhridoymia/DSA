// Sum of Array Elements
//example: arr[] = {10, 5, 8, 20, 3} => output: 46


#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements is: " << sumArray(arr, n) << endl;
    return 0;
}
