#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, d;
    cin >> n >> d;
 
    vector<long long> p(n);
    for (auto &x : p) cin >> x;
 
    sort(p.begin(), p.end());
 
    long long l = 0, r = n - 1;
    long long wins = 0;
 
    while (l <= r) {
 
        long long need = d / p[r] + 1;
 
        if (l + need - 1 <= r) {
            wins++;
            l += need - 1;
            r--;
        }
        else break;
    }
 
    cout << wins;
}