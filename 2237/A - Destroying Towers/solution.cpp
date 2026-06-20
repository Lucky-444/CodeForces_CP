#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int T ;
	cin >> T;
	
	while(T --){
	    int n;
	    cin >> n;
	    int ans = 0; 
	    int mini = INT_MAX;
	    for(int i = 0 ; i < n ; i ++){
	        int x;
	        cin >> x;
	        mini = min(mini , x);
	        
	        ans += mini ;
	    }
	    
	    cout << ans << endl;
	}
 
}