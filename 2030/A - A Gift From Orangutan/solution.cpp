#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n ;
 
   cin >> n ;
 
   vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>> arr[i];
  }
 
 sort(arr.begin(),arr.end());
arr.insert(arr.begin(),arr.back());
 arr.pop_back();
 
 int ans = 0;
 int maxi = 0;
 int mini = 1e9;
 
 for(int i = 0;i<n;i++ ){
     maxi = max(maxi,arr[i]);
     mini = min(mini,arr[i]);
     
     ans += maxi - mini;
     
     
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
 
    