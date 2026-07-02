#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n , r ;
 
   cin >> n >> r;
   
   vector<int>arr(n);
   for(int i = 0;i<n;i++){
       cin>>arr[i];
   }
   
   int left  = 0,ans  = 0;
   
   for(int i = 0;i<n;i++){
       
       
       
       if(arr[i] % 2 == 1){
           left++;
           ans += arr[i] - 1 ;
          
       }
       else{
           ans += arr[i];
       }
       
       r = (r - arr[i] /2);
    
   }
   
   if(left < r){
       ans +=left;
   }
   
   else {
       ans += (2*r - left);
   }
   
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