#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n;
 
   cin >> n;
   
   vector<int>a(n);
   vector<int>b(n);
   
   for(int i = 0;i<n;i++){
       cin>>a[i];
   }
   
   for(int i =0;i<n;i++){
       cin>>b[i];
   }
   
   int res =  a.back();//alwAYS
   
   for(int i = 1;i<n;i++){
       res+=max(0,a[i-1] - b[i]);
   }
   
   cout<<res<<endl;
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    