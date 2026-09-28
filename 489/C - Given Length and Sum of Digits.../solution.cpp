#include <bits/stdc++.h>
using namespace std;
 
int m, s;
int dp[105][1005];
 
// Find largest number
bool solveMax(int pos, int sum, string &ans) {
 
    // All digits are selected
    if(pos == m) {
        return sum == 0;
    }
 
    if(dp[pos][sum] != -1)
        return dp[pos][sum];
 
    // Try bigger digits first
    for(int d = 9; d >= 0; d--) {
 
        // First digit cannot be 0
        if(pos == 0 && d == 0)
            continue;
 
        // Cannot use a digit bigger than remaining sum
        if(d > sum)
            continue;
 
        ans.push_back('0' + d);
 
        if(solveMax(pos + 1, sum - d, ans))
            return dp[pos][sum] = 1;
 
        ans.pop_back();
    }
 
    return dp[pos][sum] = 0;
}
 
 
// Find smallest number
bool solveMin(int pos, int sum, string &ans) {
 
    // All digits are selected
    if(pos == m) {
        return sum == 0;
    }
 
    if(dp[pos][sum] != -1)
        return dp[pos][sum];
 
    // Try smaller digits first
    for(int d = 0; d <= 9; d++) {
 
        // First digit cannot be 0
        if(pos == 0 && d == 0)
            continue;
 
        if(d > sum)
            continue;
 
        ans.push_back('0' + d);
 
        if(solveMin(pos + 1, sum - d, ans))
            return dp[pos][sum] = 1;
 
        ans.pop_back();
    }
 
    return dp[pos][sum] = 0;
}
 
 
int main() {
 
    cin >> m >> s;
 
    // Impossible cases
    if(s == 0) {
 
        if(m == 1) {
            cout << "0 0
";
        }
        else {
            cout << "-1 -1
";
        }
 
        return 0;
    }
 
    if(s > 9 * m) {
        cout << "-1 -1
";
        return 0;
    }
 
 
    // ---------------- MAXIMUM ----------------
 
    memset(dp, -1, sizeof(dp));
 
    string mx = "";
 
    solveMax(0, s, mx);
 
 
    // ---------------- MINIMUM ----------------
 
    memset(dp, -1, sizeof(dp));
 
    string mn = "";
 
    solveMin(0, s, mn);
 
 
    cout << mn << " " << mx << "
";
 
    return 0;
}