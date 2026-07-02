#include <bits/stdc++.h>
using namespace std;
 
const int MAXA = 200000 + 5;
 
int n;
int a[MAXA];
 
// Adjacency list of the tree
vector<int> graph[MAXA];
 
// Smallest Prime Factor (SPF)
int spf[MAXA];
 
// For every prime p,
// nodes[p] contains all nodes divisible by p.
vector<int> nodes[MAXA];
 
// dp[u] = longest downward path from u
int dp[MAXA];
 
// Used to avoid clearing visited arrays every time
int vis[MAXA];
 
// Final answer
int ans = 0;
 
//------------------------------------------
// Build SPF using sieve
//------------------------------------------
void sieve() {
 
    for (int i = 2; i < MAXA; i++)
        spf[i] = i;
 
    for (int i = 2; i * i < MAXA; i++) {
 
        if (spf[i] != i)
            continue;
 
        for (int j = i * i; j < MAXA; j += i)
            if (spf[j] == j)
                spf[j] = i;
    }
}
 
//------------------------------------------
// DFS
//------------------------------------------
void dfs(int u, int parent, int prime) {
 
    vis[u] = 1;
 
    dp[u] = 1;
 
    int best1 = 0;
    int best2 = 0;
 
    for (int v : graph[u]) {
 
        if (v == parent)
            continue;
 
        // Ignore nodes not divisible by prime
        if (a[v] % prime != 0)
            continue;
 
        dfs(v, u, prime);
 
        if (dp[v] > best1) {
 
            best2 = best1;
            best1 = dp[v];
        }
 
        else if (dp[v] > best2) {
 
            best2 = dp[v];
        }
    }
 
    // Longest downward path
    dp[u] = best1 + 1;
 
    // Longest path passing through u
    ans = max(ans, best1 + best2 + 1);
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    sieve();
 
    cin >> n;
 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    for (int i = 1; i < n; i++) {
 
        int u, v;
        cin >> u >> v;
 
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
 
    // Store every node under its distinct prime factors
    for (int i = 1; i <= n; i++) {
 
        int x = a[i];
 
        while (x > 1) {
 
            int p = spf[x];
 
            nodes[p].push_back(i);
 
            while (x % p == 0)
                x /= p;
        }
    }
 
    // Process every prime separately
    for (int p = 2; p < MAXA; p++) {
 
        if (nodes[p].empty())
            continue;
 
        // Reset visited only for relevant nodes
        for (int u : nodes[p])
            vis[u] = 0;
 
        // DFS every connected component
        for (int u : nodes[p]) {
 
            if (!vis[u])
                dfs(u, 0, p);
        }
    }
 
    cout << ans << '
';
}