#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n , a,b;
   cin >> n >> a >> b;
 
   if(abs(a-b) % 2){
    cout<<"No"<<endl;
   }
   else{
    cout<<"Yes"<<endl;
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