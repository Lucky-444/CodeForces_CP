#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(),greater<int>());  // Sort the array
    
    int ans = 0, s = 0;
    
    for (int i = 0; i < n; i++) {
       s+=a[i];
       
       if(s <= k){
           ans = k -s;
       }
    }
    
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