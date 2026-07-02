#include <bits/stdc++.h>
 
using namespace std;
void solve(){
   int n ;
 
   cin >> n ;
 
   vector<int>arr(2*n);
  for(int i=0; i<2*n; i++){
    cin>> arr[i];
  }
 
  int cnt =  0,cntzero = 0;
  for(int i=0; i<2*n; i++){
    if(arr[i] == 1){
        cnt++;
    }
    else {
        cntzero++;
    }
  }
 
  int mini  = cnt % 2;
  int maxi = min(cnt, cntzero);
 
  cout<< mini << " " << maxi << endl;
 
 
 
   
}
int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 
    
 