// Move Zeros to End (Two Pointers)
// Given an array of integers, move all the zeros to the end of the array while maintaining the relative order of the non-zero elements.
// example: arr[] = {0, 1, 0, 3, 12} => output: {1, 3, 12, 0, 0}

#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int left = 0;
    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] != 0) {
            swap(arr[left], arr[right]);
            left++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    cout << "Original array: ";
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;

    moveZerosToEnd(arr);

    cout << "Array after moving zeros to end: ";
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}