#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<pair<long long, long long>> trees; // {x, h}
vector<vector<long long>> dp;
 
long long solve(int i, bool prevFallen) {
    if (i == n) return 0;
    if (dp[i][prevFallen] != -1) return dp[i][prevFallen];
 
    long long ans = 0;
 
    // Determine the last occupied point from previous tree
    long long leftBound = trees[i - 1].first;
    if (prevFallen)
        leftBound = trees[i - 1].first + trees[i - 1].second;
 
    // Option 1: Cut current tree to the left
    if (trees[i].first - trees[i].second > leftBound)
        ans = max(ans, 1 + solve(i + 1, false));
 
    // Option 2: Leave current tree standing
    ans = max(ans, solve(i + 1, false));
 
    // Option 3: Cut current tree to the right
    if (i == n - 1 || trees[i].first + trees[i].second < trees[i + 1].first)
        ans = max(ans, 1 + solve(i + 1, true));
 
    return dp[i][prevFallen] = ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
    trees.resize(n);
    for (int i = 0; i < n; i++)
        cin >> trees[i].first >> trees[i].second; // x, h
 
    dp.assign(n, vector<long long>(2, -1));
 
    // First tree can always fall left
    long long result = 1 + solve(1, false);
 
    cout << result << "
";
    return 0;
}