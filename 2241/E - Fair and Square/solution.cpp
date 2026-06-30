#include <bits/stdc++.h>
using namespace std;
 
bool is_perfect_square(long long x) {
    if (x < 0) return false;
    long long sr = round(sqrt(x));
    return sr * sr == x;
}
 
void dfs(int u, int p, const vector<vector<int>>& adj, const vector<long long>& a, vector<int>& sz, long long& squarewf) {
    sz[u] = 1;
    vector<int> components;
    
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, adj, a, sz, squarewf);
            sz[u] += sz[v];
            components.push_back(sz[v]);
        }
    }
    
    if (p != 0) {
        components.push_back((int)adj.size() - 1 - sz[u]);
    }
    
    if (is_perfect_square(a[u])) {
        long long p1 = 0, p2 = 0, p3 = 0;
        for (int s : components) {
            long long val = s;
            p1 += val;
            p2 += val * val;
            p3 += val * val * val;
        }
        
        long long e2 = (p1 * p1 - p2) / 2;
        long long e3 = (p1 * p1 * p1 - 3 * p1 * p2 + 2 * p3) / 6;
        
        squarewf += e2 + e3;
    }
}
 
void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    long long squarewf = 0;
    vector<int> sz(n + 1, 0);
    
    dfs(1, 0, adj, a, sz, squarewf);
    
    cout << squarewf << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}