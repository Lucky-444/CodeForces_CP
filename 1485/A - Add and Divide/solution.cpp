#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int solve(ll a, ll b) {
    queue<pair<pair<ll,ll>, int>> q;
    set<pair<ll,ll>> vis;
 
    q.push({{a, b}, 0});
    vis.insert({a, b});
 
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
 
        ll x = it.first.first;
        ll y = it.first.second;
        int steps = it.second;
 
        if (x == 0) return steps;
 
        // Operation 1: divide
        if (y > 1) {
            ll nx = x / y;
            if (!vis.count({nx, y})) {
                vis.insert({nx, y});
                q.push({{nx, y}, steps + 1});
            }
        }
 
        // Operation 2: increase b (limit it)
        if (y <= 1e9 && y <= b + 30) {
            if (!vis.count({x, y + 1})) {
                vis.insert({x, y + 1});
                q.push({{x, y + 1}, steps + 1});
            }
        }
    }
 
    return INT_MAX;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll a, b;
        cin >> a >> b;
 
        cout << solve(a, b) << "
";
    }
}