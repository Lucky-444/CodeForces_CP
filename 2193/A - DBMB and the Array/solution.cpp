#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }
 
        if (s >= sum && (s - sum) % x == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}