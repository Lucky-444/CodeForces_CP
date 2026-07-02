#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 1; i + 1 < n; i += 2) { // check pairs (2,3), (4,5), ... in 1-based indexing
        if (a[i] != a[i+1]) {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}