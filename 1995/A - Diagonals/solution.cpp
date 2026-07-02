#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n ,k ;
 
   cin >> n >> k ;
 
 int temp = n,ans = 1;
 if(k==0) {
     cout<<0<<endl;
     return;
 }
 
 if(k<= n){
     cout<< 1<<endl;
     return;
 }
 
 k-=n;
 temp --;
 while(temp >0 and k>=temp){
     ans ++;
     k-=temp;
     if(k<temp) break;
     
     k-=temp;
     ans++;
     temp--;
     
 }
 
 if(temp != 0 && k > 0) ans++;
 
 cout<<ans<<endl;
 
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    