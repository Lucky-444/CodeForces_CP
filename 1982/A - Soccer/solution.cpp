#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int a,b,c,d;
   
   cin >> a >> b >> c >> d;
   
   if(a < b == c < d){
       cout<<"yes"<<endl;
   }
   else {
       cout<<"no"<<endl;
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
 
    