// Find Maximum Element in an Array
//example: arr[] = {10, 5, 8, 20, 3} => output: 20


#include <iostream>
using namespace std;

int findMax(int arr[], int n) {

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[] = {10, 5, 8, 20, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element is: " << findMax(arr, n) << endl;
    
    return 0;
}