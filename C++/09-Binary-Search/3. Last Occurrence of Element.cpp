// Last Occurrence of an Element in a Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; 
            left = mid + 1; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5};
    int target = 4;

    int index = lastOccurrence(arr, target);

    if (index != -1) {
        cout << "Last occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}