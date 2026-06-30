#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int T;
    cin >> T;
    
    while(T --){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        for(int i = 1 ; i < n ; i ++){
            if(s[i] != s[i - 1]){
                cnt ++;
            }
        }
        
        int m;
        if(cnt == 1){
            m = 2;
        }else{
            m = 1;
        }
        
        cout << m << endl;
    }
}