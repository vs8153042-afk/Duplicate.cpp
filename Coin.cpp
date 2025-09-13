#include <iostream>
#include <climits>
using namespace std;
int coinChange(int coins[], int n, int amount) {
    int dp[10001]; 
    for (int i = 0; i <= amount; i++)
        dp[i] = INT_MAX;
    dp[0] = 0; 
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return (dp[amount] == INT_MAX) ? -1 : dp[amount];
}
int main() {
    int coins[] = {1, 2, 5};
    int n = 3;
    int amount = 11;

    int result = coinChange(coins, n, amount);
    cout << result << endl; 
    return 0;
}
