#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll neg = -(1LL << 60);
 
int main() {
    int n, q;
    cin >> n >> q;
 
    vector<ll> v(n);
    vector<int> c(n);
 
    // Take the complete input first
    for(int i = 0; i < n; i++)
        cin >> v[i];
 
    for(int i = 0; i < n; i++)
        cin >> c[i];
 
    while(q--) {
        ll a, b;
        cin >> a >> b;
 
        // dp[color] = maximum value of a subsequence
        // whose last selected ball has this color
        vector<ll> dp(n + 1, neg);
 
        // Best and second best dp values
        // must belong to DIFFERENT colors
        ll best = neg;
        ll second = neg;
 
        int bestColor = -1;
        int secondColor = -1;
 
        for(int i = 0; i < n; i++) {
            int col = c[i];
            ll val = v[i];
 
            ll cur = neg;
 
            // 1. Start a new subsequence with this ball
            cur = max(cur, val * b);
 
            // 2. Take this ball after a ball of SAME color
            if(dp[col] != neg) {
                cur = max(cur, dp[col] + val * a);
            }
 
            // 3. Take this ball after a ball of DIFFERENT color
            ll bestOther = neg;
 
            if(bestColor != col)
                bestOther = best;
            else
                bestOther = second;
 
            if(bestOther != neg) {
                cur = max(cur, bestOther + val * b);
            }
 
            // Update dp for this color
            dp[col] = max(dp[col], cur);
 
            // Now update best and second best
            if(bestColor == col) {
                // Same color was already the best.
                // Only its value can increase.
                best = dp[col];
            }
            else if(secondColor == col) {
                // This color was second best and may become best.
                second = dp[col];
 
                if(second > best) {
                    swap(best, second);
                    swap(bestColor, secondColor);
                }
            }
            else {
                // This is a completely new color state
                if(dp[col] > best) {
                    second = best;
                    secondColor = bestColor;
 
                    best = dp[col];
                    bestColor = col;
                }
                else if(dp[col] > second) {
                    second = dp[col];
                    secondColor = col;
                }
            }
        }
 
        // Empty subsequence is allowed, so answer cannot be negative
        cout << max(0LL, best) << '
';
    }
 
    return 0;
}