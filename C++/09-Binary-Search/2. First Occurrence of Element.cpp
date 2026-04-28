// First Occurrence of Element in a Sorted Array using Binary Search
// Given a sorted array and an element, find the index of the first occurrence of the element in the array using binary search. If the element is not present in the array, return -1.
// example: arr[] = {1, 2, 2, 3, 4, 5}, x = 2 => output: First occurrence of element is at index 1 (index of the first occurrence of 2 in the array)

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            if (mid == 0 || arr[mid - 1] < x) {
                return mid;
            } else {
                high = mid - 1;
            }
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int result = firstOccurrence(arr, n, x);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "First occurrence of element is at index " << result << endl;
    }
    return 0;
}