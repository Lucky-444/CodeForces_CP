#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n ;
 
   cin >> n ;
 
   vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>> arr[i];
  }
 
  unordered_map<int,int>mp;
  int ans = 0;
  for(auto it : arr){
      mp[it]++;
      
     
  }
  
  for(auto it : arr){
      ans = max(ans,mp[it]);
  }
  
  cout<< n - ans<<endl;
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    