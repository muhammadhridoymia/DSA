// Count Even & Odd Numbers in an Array
//example: arr[] = {10, 5, 8, 20, 3} => output: Even: 3, Odd: 2


#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n, int &even, int &odd) {
    even = 0;
    odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
}

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even, odd;
    countEvenOdd(arr, n, even, odd);
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}
