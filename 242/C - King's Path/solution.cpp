#include <bits/stdc++.h>
using namespace std;
 
using pii = pair<int, int>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
 
    int n;
    cin >> n;
 
    set<pii> allowed;
 
    while (n--) {
        int r, a, b;
        cin >> r >> a >> b;
 
        for (int c = a; c <= b; c++) {
            allowed.insert({r, c});
        }
    }
 
    queue<pii> q;
    map<pii, int> dist;
 
    q.push({sx, sy});
    dist[{sx, sy}] = 0;
 
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
 
    while (!q.empty()) {
 
        auto [x, y] = q.front();
        q.pop();
 
        if (x == ex && y == ey) {
            cout << dist[{x, y}] << "
";
            return 0;
        }
 
        for (int k = 0; k < 8; k++) {
 
            int nx = x + dx[k];
            int ny = y + dy[k];
 
            if (!allowed.count({nx, ny}))
                continue;
 
            if (dist.count({nx, ny}))
                continue;
 
            dist[{nx, ny}] = dist[{x, y}] + 1;
            q.push({nx, ny});
        }
    }
 
    cout << -1 << "
";
 
    return 0;
}