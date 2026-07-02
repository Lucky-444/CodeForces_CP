#include <bits/stdc++.h>
#define ll long long int
#define inf 1e18
#define nl "
"
#define mod 1000000007
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    
    while(t-- ){
        string s;
        cin >> s;
    
        int n = s.length();
    
        if (n > 10) {
            cout <<s[0]<<n - 2<<s[n-1]<< nl;
            
        }
    
        else
        cout << s << nl;
    }
    
    return 0;
}