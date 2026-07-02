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
    int w;
    cin >> w;
 
    if (w % 2 == 0 && w >= 4)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
 
    return 0;
}