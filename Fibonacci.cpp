#include <iostream>
using namespace std;

int fibonacci(int n) {
    // DP array to store results
    long long dp[n+1];
    
    dp[0] = 0;
    if(n > 0) dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n; // Input
    cout << fibonacci(n) << endl; // Output
    return 0;
}
