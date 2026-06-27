#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;
 
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
int main() {
    //your code goes here
 
    int T;
    cin >> T;
 
    while (T--) {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
 
        ll fre = n * m - (n - r + 1) * (m - c + 1);
 
        cout << modpow(2, fre) << endl;
    }
 
    return 0;
}