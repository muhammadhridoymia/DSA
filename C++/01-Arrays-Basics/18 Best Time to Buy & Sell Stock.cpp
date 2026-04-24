// Best Time to Buy & Sell Stock
//example: prices[] = {7, 1, 5, 3, 6, 4} => output: 5 (maximum profit)

#include <iostream>
#include <algorithm>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    cout << "Maximum profit is: " << maxProfit(prices, n) << endl;
    return 0;
}