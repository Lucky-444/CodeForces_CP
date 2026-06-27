#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
	// your code goes here
    int T;
    cin >> T;
 
    while (T--) {
        ll n, k;
        cin >> n >> k;
 
        ll ans = 0;
 
        for (int i = 0; ; i++) {
            ll cost = 1LL << i;
            if (cost > n) break;
 
            ll take = min(k, n / cost);
            ans += take;
            n -= take * cost;
 
            if (take < k) break;
        }
        
        cout << ans << endl;
    }
 
    return 0;
}