#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int power(int n, int k){
    int res = 1;
    
    while(res * k <= n) res = res*k;
    
    return res;
        
    
}
 
signed main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
       int n , k ;
    
       cin >> n >> k;
       
      if(k == 1) cout<<n<<endl;
     
         else{
             int cnt = 0;
             while(n>=k) n-=power(n,k) ,cnt++;
             
             cout<<cnt + n<<endl;
        }
    }
   
}