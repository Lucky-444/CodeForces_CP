#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int N = 100005;
 
vector<int> adj[N];
ll a[N];
ll inc[N], decr[N];
 
void dfs(int u, int parent)
{
    inc[u] = 0;
    decr[u] = 0;
 
    for (int v : adj[u])
    {
        if (v == parent)
            continue;
 
        dfs(v, u);
 
        inc[u] = max(inc[u], inc[v]);
        decr[u] = max(decr[u], decr[v]);
    }
 
    ll balance = a[u] + inc[u] - decr[u];
 
    if (balance > 0)
        decr[u] += balance;
    else
        inc[u] += -balance;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    dfs(1, 0);
 
    cout << inc[1] + decr[1] << '
';
 
    return 0;
}