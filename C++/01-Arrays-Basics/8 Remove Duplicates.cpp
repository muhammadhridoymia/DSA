// Remove Duplicates from an Array
//example: arr[] = {10, 5, 8, 20, 3, 5} => output: {10, 5, 8, 20, 3}

#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[index++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}