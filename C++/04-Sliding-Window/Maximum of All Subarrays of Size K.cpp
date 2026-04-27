// Maximum of All Subarrays of Size K
// Given an array of integers and a window size k, find the maximum element in every contiguous subarray of size k.
// example: arr[] = {1, 2, 3, 1, 4, 5}, k = 3 => output: {3, 3, 4, 5} (maximum elements in each window of size 3)

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxOfAllSubarrays(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq; 

    for (size_t i = 0; i < arr.size(); i++) {
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);

        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
            if (!dq.empty() && dq.front() <= static_cast<int>(i - k + 1)) {
                dq.pop_front();
            }
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 4, 5};
    int k = 3;
    vector<int> result = maxOfAllSubarrays(arr, k);

    cout << "Maximum element in every window of size " << k << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}