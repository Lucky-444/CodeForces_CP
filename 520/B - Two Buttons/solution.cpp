#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, m;
    cin >> n >> m;
 
    vector<int> dist(200001, -1);
 
    queue<int> q;
 
    q.push(n);
    dist[n] = 0;
 
    while (!q.empty()) {
 
        int x = q.front();
        q.pop();
 
        if (x == m) {
            cout << dist[x];
            return 0;
        }
 
        if (x - 1 >= 0 && dist[x - 1] == -1) {
            dist[x - 1] = dist[x] + 1;
            q.push(x - 1);
        }
 
        if (2 * x <= 200000 && dist[2 * x] == -1) {
            dist[2 * x] = dist[x] + 1;
            q.push(2 * x);
        }
    }
}