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
 
        if (k == 1) {
            cout << n - 1 << '
';
            for (int i = 0; i < n - 1; i++) {
                int u, v;
                cin >> u >> v;
            }
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
 
        vector<int> leafCnt(n + 1, 0);
 
        // Count leaf children for every node
        for (int i = 1; i <= n; i++) {
            if (degree[i] == 1) {
                for (auto parent : adj[i]) {
                    leafCnt[parent]++;
                }
            }
        }
 
        queue<int> q;
 
        for (int i = 1; i <= n; i++) {
            if (leafCnt[i] >= k) {
                q.push(i);
            }
        }
 
        int ans = 0;
 
        while (!q.empty()) {
 
            int node = q.front();
            q.pop();
 
            while (leafCnt[node] >= k) {
 
                ans++;
                leafCnt[node] -= k;
                degree[node] -= k;
 
                if (degree[node] == 1) {
 
                    for (auto parent : adj[node]) {
 
                        if (degree[parent] > 0) {
 
                            leafCnt[parent]++;
 
                            if (leafCnt[parent] == k) {
                                q.push(parent);
                            }
                        }
                    }
                }
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}