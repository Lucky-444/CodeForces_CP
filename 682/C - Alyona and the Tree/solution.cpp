#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int n;
vector<ll> a;
vector<vector<pair<int,ll>>> adj;
vector<int> sub;
 
void dfsSize(int u) {
    sub[u] = 1;
 
    for (auto &[v, w] : adj[u]) {
        dfsSize(v);
        sub[u] += sub[v];
    }
}
 
int ans = 0;
 
void dfs(int u, ll dist, ll mn) {
 
    if (dist - mn > a[u]) {
        ans += sub[u];
        return;
    }
 
    mn = min(mn, dist);
 
    for (auto &[v, w] : adj[u]) {
        dfs(v, dist + w, mn);
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
 
    a.resize(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    adj.resize(n + 1);
 
    for (int i = 2; i <= n; i++) {
        int p;
        ll c;
 
        cin >> p >> c;
 
        adj[p].push_back({i, c});
    }
 
    sub.resize(n + 1);
 
    dfsSize(1);
 
    dfs(1, 0, 0);
 
    cout << ans << '
';
 
    return 0;
}