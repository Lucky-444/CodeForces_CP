#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n);
 
    for(int i=0;i<n;i++)
        cin>>a[i];
 
    vector<int> inc(n), dec(n);
 
    // furthest non-decreasing
    inc[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<=a[i+1])
            inc[i]=inc[i+1];
        else
            inc[i]=i;
    }
 
    // furthest non-increasing
    dec[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]>=a[i+1])
            dec[i]=dec[i+1];
        else
            dec[i]=i;
    }
 
    while(m--){
        int l,r;
        cin>>l>>r;
        l--,r--;
 
        if(dec[inc[l]]>=r)
            cout<<"Yes
";
        else
            cout<<"No
";
    }
}