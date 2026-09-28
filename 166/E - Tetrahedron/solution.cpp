#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
int main() {
 
    int n;
    cin >> n;
 
    // dp:
    // 0 -> A
    // 1 -> B
    // 2 -> C
    // 3 -> D
 
    vector<ll> dp(4, 0);
 
    // Initially we are at D
    dp[3] = 1;
 
    for(int step = 1; step <= n; step++) {
 
        vector<ll> ndp(4, 0);
 
        // To reach A, we can come from B, C or D
        ndp[0] = (dp[1] + dp[2] + dp[3]) % MOD;
 
        // To reach B, we can come from A, C or D
        ndp[1] = (dp[0] + dp[2] + dp[3]) % MOD;
 
        // To reach C, we can come from A, B or D
        ndp[2] = (dp[0] + dp[1] + dp[3]) % MOD;
 
        // To reach D, we can come from A, B or C
        ndp[3] = (dp[0] + dp[1] + dp[2]) % MOD;
 
        // Current step becomes the old state
        // for the next step
        dp = move(ndp);
    }
 
    // After n moves, count ways to be back at D
    cout << dp[3] << '
';
 
    return 0;
}