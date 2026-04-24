// Move Zeros to End of Array
//example: arr[] = {10, 0, 8, 0, 3} => output: {10, 8, 3, 0, 0}


#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int arr[] = {10, 0, 8, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    moveZerosToEnd(arr, n);
    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
