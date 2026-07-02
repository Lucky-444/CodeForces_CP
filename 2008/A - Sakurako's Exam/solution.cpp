#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a , b ;
    cin>>a >> b;
    
   if (a % 2 == 1 ) {
        cout << "No" << endl;
    } else if ( b % 2 == 0 || a >= 2 ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
     
}
 
int main() {
   int t   =1;
   cin >> t;
   
   while(t--){
       solve();
   }
 
}