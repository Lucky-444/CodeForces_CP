#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n, k;
    cin >> n >> k;
 
    vector<ll> left, right;
 
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            left.push_back(i);
            if (i != n / i) right.push_back(n / i);
        }
    }
 
    for (int i = right.size() - 1; i >= 0; --i) {
        left.push_back(right[i]);
    }
 
    if (k > left.size()) {
        cout << -1 << "
";
    } else {
        cout << left[k - 1] << "
";
    }
 
    return 0;
}