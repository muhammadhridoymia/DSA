// Find Second Largest Element in an Array
//example: arr[] = {10, 5, 8, 20, 3} => output: 10


#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest element is: " << findSecondLargest(arr, n) << endl;
    return 0;
}
