#include <bits/stdc++.h>
using namespace std;
 
unordered_map<int, long long> freq;  // frequency map
unordered_map<int, long long> dp;    // memoization cache
 
long long solve(int x) {
    if (x <= 0) return 0;
    if (x == 1) return freq[1] * 1;
    if (dp.count(x)) return dp[x];
 
    long long skip = solve(x - 1);                     // don't take x
    long long take = solve(x - 2) + 1LL * freq[x] * x; // take x
 
    return dp[x] = max(skip, take);
}
 
int main() {
    int n;
    cin >> n;
 
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
        mx = max(mx, val);
    }
 
    cout << solve(mx) << endl;
    return 0;
}