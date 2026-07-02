#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int m,a,b,c ;
 
   cin >> m >> a >> b >> c ;
   
  int x  = min(a,m);
  int y = min(b,m);
  
  int c1 = min(m-x,c);
  int c2 = min(m-y,c-c1);
  
  cout<<x+y+c1+c2 << endl;
 
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    