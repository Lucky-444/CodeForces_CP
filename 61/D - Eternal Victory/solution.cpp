#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int N = 100005;
 
vector<pair<int,int>> adj[N];
ll dp[N];
 
void dfs(int u, int parent)
{
    dp[u] = 0;
 
    for (auto [v, w] : adj[u])
    {
        if (v == parent) continue;
 
        dfs(v, u);
 
        dp[u] = max(dp[u], dp[v] + w);
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    ll sum = 0;
 
    for (int i = 1; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
 
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
 
        sum += w;
    }
 
    dfs(1, 0);
 
    cout << 2 * sum - dp[1] << '
';
 
    return 0;
}