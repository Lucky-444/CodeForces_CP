#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int l, r;
    cin >> l>> r;
    
    if(l % 2) l--;
    
    int ans = (r-l+1) / 4;
    
    cout << ans << endl;  // Print count of elements that can be selected
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}