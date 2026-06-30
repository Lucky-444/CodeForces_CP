#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
 
   
    vector<long long> D(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        long long diff = b[i] - a[i];
        if (i % 2 == 1) {
            D[i] = diff;
        } else {
            D[i] = -diff;
        }
    }
 
    
    vector<long long> E(n + 2, 0);
    for (int i = 1; i <= n + 1; i++) {
        E[i] = D[i] - D[i - 1];
    }
 
    long long S_odd = 0, S_even = 0;
    bool possible = true;
    
    for (int i = 1; i <= n + 1; i++) {
        long long val = E[i];
       
        if (i % 2 == 0) {
            val = -val;
        }
        if (i % 2 != 0) {
            S_odd += val;
            if (S_odd < 0) possible = false;
        } else {
            S_even += val;
            if (S_even < 0) possible = false;
        }
    }
 
    
    if (S_odd != S_even) {
        possible = false;
    }
 
    string iswf = possible ? "YES" : "NO";
    cout << iswf << "
";
}
 
int main() {
    //your code goes here
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}