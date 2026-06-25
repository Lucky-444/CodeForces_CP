#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n, k;
        cin >> n >> k;
 
        if (n == 1) {
            cout << (k ? 0 : 1) << '
';
            continue;
        }
 
        vector<vector<int>> adj(n + 1);
        vector<int> degree(n + 1, 0);
 
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
 
            adj[u].push_back(v);
            adj[v].push_back(u);
 
            degree[u]++;
            degree[v]++;
        }
 
        queue<int> q;
 
        for (int i = 1; i <= n; i++) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }
 
        int remaining = n;
 
        while (k-- && !q.empty()) {
 
            int sz = q.size();
 
            remaining -= sz;
 
            while (sz--) {
 
                int node = q.front();
                q.pop();
 
                degree[node] = 0;
 
                for (auto nbr : adj[node]) {
 
                    if (degree[nbr] == 0)
                        continue;
 
                    degree[nbr]--;
 
                    if (degree[nbr] == 1) {
                        q.push(nbr);
                    }
                }
            }
        }
 
        cout << remaining << '
';
    }
 
    return 0;
}