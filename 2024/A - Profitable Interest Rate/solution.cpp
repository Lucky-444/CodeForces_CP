#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int a , b ;
 
   cin >> a >> b;
   
   if(a >= b) cout<<a <<endl;
   
   else{
       int diff  =  b - a;
       
       a-=diff;
       b -= 2*diff;
       
       if(a < 0) cout<<0<<endl;
       else{
           cout<<a<<endl;
       }
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