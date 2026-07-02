#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
 
       
        vector<int> best(n + 2, 0);
        for (int i = 1; i <= n; i++) {
            best[i] = max(a[i], b[i]);
        }
 
        
        vector<int> sufMax(n + 3, 0);
        for (int i = n; i >= 1; i--) {
            sufMax[i] = max(best[i], sufMax[i + 1]);
        }
 
        
        vector<long long> pref(n + 2, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + sufMax[i];
        }
 
    
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "
";
    }
 
    return 0;
}