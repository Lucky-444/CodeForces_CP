#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
 
void solve(){
    ll n ;
    cin >> n;
    string s ;
    cin >> s;
    
    ll i = 0 , j = n - 1;
    while(i <= j){
        //Check Asci Diff is 2 
        if(s[i] != s[j]){
                    
            int x = s[i];
            int y = s[j];
            
            int diff = abs(x - y);
            
            if(diff != 2 ){
                cout << "NO
";
                return ;
            }
        }
        
        i++ , j--;
        
    }
    
    cout << "YES
";
    return;
    
}
 
int main() {
	// your code goes here
	ll T ;
	cin >> T;
	
	while(T --){
	    solve();
	}
	
	return 0;
 
}