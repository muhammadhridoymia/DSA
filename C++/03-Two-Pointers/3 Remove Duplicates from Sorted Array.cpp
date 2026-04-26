// Remove Duplicates from Sorted Array (Two Pointers)
// Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.
// example: arr[] = {1, 1, 2, 2, 3, 3} => output: 3 (and the array becomes {1, 2, 3})

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;

    int left = 0;
    for (int right = 1; right < arr.size(); right++) {
        if (arr[left] != arr[right]) {
            left++;
            arr[left] = arr[right];
        }
    }
    return left + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3};
    int newLength = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}