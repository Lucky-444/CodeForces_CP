#include <bits/stdc++.h>
using namespace std;
 
int dp[100005][3];
 
int solve(int i, int prev, vector<int>& a) {
 
    // No days left
    if(i < 0)
        return 0;
 
    if(dp[i][prev] != -1)
        return dp[i][prev];
 
    // Option 1: Rest today
    int ans = 1 + solve(i - 1, 0, a);
 
    // Option 2: Contest
    if(a[i] == 1 || a[i] == 3) {
 
        // Can do contest only if yesterday was not contest
        if(prev != 1) {
            ans = min(ans, solve(i - 1, 1, a));
        }
    }
 
    // Option 3: Gym
    if(a[i] == 2 || a[i] == 3) {
 
        // Can do gym only if yesterday was not gym
        if(prev != 2) {
            ans = min(ans, solve(i - 1, 2, a));
        }
    }
 
    return dp[i][prev] = ans;
}
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    memset(dp, -1, sizeof(dp));
 
    // prev = 0 means no restriction initially
    cout << solve(n - 1, 0, a) << "
";
}
 