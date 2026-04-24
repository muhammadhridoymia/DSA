// Union of Two Arrays
//example: arr1[] = {1, 2, 3, 4, 5}, arr2[] = {4, 5, 6, 7, 8} => output: {1, 2, 3, 4, 5, 6, 7, 8}

#include <iostream>
#include <unordered_set>
using namespace std;

void unionOfArrays(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> elements;
    for (int i = 0; i < n1; i++) {
        elements.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        elements.insert(arr2[i]);
    }

    cout << "Union of the two arrays: ";
    for (const auto& elem : elements) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    unionOfArrays(arr1, n1, arr2, n2);
    return 0;
}