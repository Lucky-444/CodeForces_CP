#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int l,r,k;
 
   cin >>l >> r >>k ;
   
   int ans =  (r/k) - l + 1;
   if(ans < 0) cout<<0<<endl;
 
   else  cout<< ans << endl;
 
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    