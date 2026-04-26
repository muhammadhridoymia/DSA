// Reverse Array (Two Pointers)
// Given an array, reverse the array in place using the two pointers technique.
// example: arr[] = {1, 2, 3, 4, 5} => output: {5, 4, 3, 2, 1}


#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;

    reverseArray(arr);

    cout << "Reversed array: ";
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}