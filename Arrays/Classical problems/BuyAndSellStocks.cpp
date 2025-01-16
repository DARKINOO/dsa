// The "Buy and Sell Stocks" problem is a classic algorithmic problem that involves finding the best time to buy and sell a stock to maximize profit. 
// The goal is to identify the days on which buying and selling the stock will yield the highest profit.

#include <iostream>
#include <climits>

using namespace std;

/**
 * @brief Calculates the maximum profit that can be achieved by buying and selling stocks.
 * 
 * This function takes an array of stock prices and its size as input and calculates the maximum profit
 * that can be achieved by buying on one day and selling on another day in the future.
 * 
 * @param prices Array of stock prices where prices[i] is the price of the stock on the ith day.
 * @param n The number of days (size of the prices array).
 * 
 * @details
 * The approach used in this function is as follows:
 * 1. Create an array `bestBuy` to store the best buy price up to each day.
 * 2. Initialize `bestBuy[0]` to `INT_MAX` since there is no previous day to compare for the first day.
 * 3. Iterate through the prices array from the second day to the last day:
 *    - For each day, update `bestBuy[i]` to be the minimum of `bestBuy[i-1]` and `prices[i-1]`.
 *    - This ensures that `bestBuy[i]` contains the lowest price encountered up to the day before the current day.
 * 4. Initialize `maxProfit` to 0.
 * 5. Iterate through the prices array again:
 *    - For each day, calculate the potential profit by subtracting `bestBuy[i]` from `prices[i]`.
 *    - Update `maxProfit` to be the maximum of the current `maxProfit` and the calculated profit.
 * 6. Print the maximum profit.
 * 
 * @note The time complexity of this approach is O(n), where n is the number of days.
 */
void maxProfit(int *prices, int n) {
    int bestBuy[100000]; // stores the best buy price
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currentProfit);
    }
    cout << "Max Profit: " << maxProfit << endl;
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);
    return 0;
}
 
// Time Complexity: O(n)