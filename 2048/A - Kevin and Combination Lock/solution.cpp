#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n ;
 
   cin >> n ;
   
   int div =  n / 33;
   
   if(div * 33 == n){
       cout<<"Yes"<<endl;
   }
   
   else{
       cout<<"No"<<endl;
   }
   
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}