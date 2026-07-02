#include <bits/stdc++.h>
#define ll long long int
#define inf 1e18
#define mod 1000000007
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n ; 
    cin >> n;
    string s ;
    cin>>s;
    
    unordered_map<char, int>mp;
    for(auto it : s){
        mp[it]++;
    }
    
    
    if(mp['A'] > mp['D']) cout<< "Anton
";
    else if(mp['A'] < mp['D']) cout<< "Danik
";
    else cout<<"Friendship";
    
    
    return 0;
}