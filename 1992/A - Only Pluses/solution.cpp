#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
      int a, b, c;
    cin >> a >> b >> c;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    pq.push(a);
    pq.push(b);
    pq.push(c);
    
    // Increment the smallest element 5 times
    for (int i = 0; i < 5; i++) {
        int top = pq.top();
        pq.pop();
        top++;
        pq.push(top);
    }
    
    // Extract the elements properly
    int x = pq.top(); pq.pop();
    int y = pq.top(); pq.pop();
    int z = pq.top(); pq.pop();
    
    int ans = x * y * z;
    
    cout << ans << endl;
    
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}