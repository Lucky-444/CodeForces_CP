#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n;
   cin>>n;
   
   vector<int>arr(n);
   
   for(int i = 0;i<n;i++){
       cin>>arr[i];
   }
   
   sort(arr.begin(),arr.end());
   
   int ai = arr[0];
   int ak = arr[1];
   
   int al = arr[n-2];
   int aj = arr[n-1];
   
   int ans = abs(ai - aj)+ abs(aj - ak) +abs(ak - al) + abs(al -ai);
   
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
 
    