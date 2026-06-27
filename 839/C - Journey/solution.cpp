#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adj;
 
double dfs(int node, int parent) {
 
    double sum = 0;
    int children = 0;
 
    for (int child : adj[node]) {
 
        if (child == parent)
            continue;
 
        children++;
 
        sum += dfs(child, node);
    }
 
    if (children == 0)
        return 0;
 
    return 1.0 + sum / children;
}
 
int main() {
 
    int n;
    cin >> n;
 
    adj.resize(n + 1);
 
    for (int i = 0; i < n - 1; i++) {
 
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    cout << fixed << setprecision(10)
         << dfs(1, 0);
}