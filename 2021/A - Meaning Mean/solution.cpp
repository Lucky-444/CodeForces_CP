#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    
   
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto it : arr){
        pq.push(it);
    }
    
    int ans = 0;
    while(pq.size() > 1){
        int top1 = pq.top();
        pq.pop();
        
        int top2 = pq.top();
        pq.pop();
        
        ans = (top1 + top2) / 2;
        
        pq.push(ans);
    }
    
   cout<< pq.top() << endl;
    
  
     
}
 
signed main() {
   int t   =1;
   cin >> t;
   
   while(t--){
       solve();
   }
 
}