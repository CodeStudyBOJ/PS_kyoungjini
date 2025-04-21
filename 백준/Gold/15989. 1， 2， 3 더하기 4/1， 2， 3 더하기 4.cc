#include <iostream>
using namespace std;

int dp[10001][4];

int main() {
    // initialize
    dp[1][1] = 1;

    dp[2][1] = 1;
    dp[2][2] = 1;

    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    // dp
    for (int i = 4; i < 10001; i++) {
        dp[i][1] = 1;
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
        dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
    }

    // get inputs
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        // print result
        cout << dp[n][1] + dp[n][2] + dp[n][3] << "\n";
    }

    return 0;
}