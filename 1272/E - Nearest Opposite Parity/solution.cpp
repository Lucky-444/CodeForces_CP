#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
 
    vector<vector<int>> rev(n + 1);
 
    for (int i = 1; i <= n; i++) {
 
        cin >> a[i];
 
        if (i + a[i] <= n)
            rev[i + a[i]].push_back(i);
 
        if (i - a[i] >= 1)
            rev[i - a[i]].push_back(i);
    }
 
    vector<int> ans(n + 1, -1);
 
    auto bfs = [&](int parity) {
 
        queue<int> q;
 
        vector<int> dist(n + 1, -1);
 
        // Multi-source
        for (int i = 1; i <= n; i++) {
 
            if ((a[i] % 2) == parity) {
 
                q.push(i);
 
                dist[i] = 0;
            }
        }
 
        while (!q.empty()) {
 
            int u = q.front();
 
            q.pop();
 
            for (int v : rev[u]) {
 
                if (dist[v] != -1)
                    continue;
 
                dist[v] = dist[u] + 1;
 
                q.push(v);
            }
        }
 
        for (int i = 1; i <= n; i++) {
 
            if ((a[i] % 2) != parity)
 
                ans[i] = dist[i];
        }
    };
 
    bfs(0); // Even sources
    bfs(1); // Odd sources
 
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}