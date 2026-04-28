// Classic Binary Search in C++
// Given a sorted array and an element, find the index of the element in the array using binary search. If the element is not present in the array, return -1.
// example: arr[] = {2, 3, 4, 10, 40}, x = 10 => output: Element found at index 3 (index of 10 in the array)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}