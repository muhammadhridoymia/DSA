// First Negative Number in Every Window
// Given an array of integers and a window size k, find the first negative number in every contiguous subarray of size k. If there is no negative number in a window, return 0 for that window.
// example: arr[] = {12, -1, -7, 8, -15, 30, 16, 28}, k = 3 => output: [-1, -1, -7, -15, 0, 0] (first negative numbers in each window of size 3)

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> firstNegativeInWindow(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq; 

    for (size_t i = 0; i < arr.size(); i++) {
        if (!dq.empty() && dq.front() < static_cast<int>(i - k + 1)) {
            dq.pop_front();
        }

        if (arr[i] < 0) {
            dq.push_back(i);
        }

        if (i >= k - 1) {
            if (!dq.empty()) {
                result.push_back(arr[dq.front()]);
            } else {
                result.push_back(0); 
            }
        }
    }

    return result;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> result = firstNegativeInWindow(arr, k);

    cout << "First negative number in every window of size " << k << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}