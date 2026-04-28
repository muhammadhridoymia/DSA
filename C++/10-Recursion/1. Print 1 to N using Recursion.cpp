// Print 1 to N using Recursion in C++
// Given a positive integer N, print all the numbers from 1 to N using recursion.
// example: N = 5 => output: 1 2 3 4 5 (numbers from 1 to 5)

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int N = 5;
    printNumbers(N);
    return 0;
}