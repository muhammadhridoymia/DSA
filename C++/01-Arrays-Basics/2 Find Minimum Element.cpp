// Find Minimum Element in an Array
//example: arr[] = {10, 5, 8, 20, 3} => output: 3


#include <iostream>
using namespace std;

int findMin(int arr[], int n) {

    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {

    int arr[] = {10, 5, 8, 20, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element is: " << findMin(arr, n) << endl;
    
    return 0;
}