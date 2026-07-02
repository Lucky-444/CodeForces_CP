#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
 
void solve(){
    ll n;
    cin >> n ;
    
    string s ;
    cin >> s;
    
    //one case ek baar jau or ek dikha to ghumke aajao
    int ans = 0;
    int c = 0;
    //second case is switch between each ones visit
    
    
    for(int i = 0 ; i < n ; i++){
        c ++;
        if(s[i] == '1'){
            ans = max(ans , (i + 1) * 2);
            c ++;
        }
    }
    
    ans = max(ans , c);
    
    //i am doing it from forward
    //let do same thing from backward also
    
    reverse(s.begin() , s.end()) ;
    c = 0;
    //second case is switch between each ones visit
    
    
    for(int i = 0 ; i < n ; i++){
        c ++;
        if(s[i] == '1'){
            ans = max(ans , (i + 1) * 2);
            c ++;
        }
    }
    
    ans = max(ans , c);
    
    
    cout << ans << endl ;
    
    return ;
    
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