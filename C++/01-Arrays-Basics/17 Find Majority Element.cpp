// Find Majority Element
//example: arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}, n = 9 => output: 4 (majority element)

#include <iostream>
#include <unordered_map>
using namespace std;

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (const auto& pair : frequency) {
        if (pair.second > n / 2) {
            return pair.first;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Majority element is: " << findMajorityElement(arr, n) << endl;
    return 0;
}