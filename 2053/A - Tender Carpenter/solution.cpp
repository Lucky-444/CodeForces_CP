#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n;
   cin >>n;
   vector<int>arr(n);
   for(int i =0;i<n;i++){
       cin >> arr[i];
   }
   
   for(int i = 1;i<n;i++){
       int mini = min(arr[i-1],arr[i]);
       int maxi  =max(arr[i-1],arr[i]);
       
       if(2 * mini > maxi){
           cout<<"yes"<<endl;
           return;
       }
   }
   
   cout<<"No"<<endl;
 
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    