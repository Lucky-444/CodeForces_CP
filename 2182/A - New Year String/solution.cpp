#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int make2026 = INT_MAX;
        for (int i = 0; i + 3 < n; i++) {
            int cnt = 0;
            cnt += (s[i] != '2');
            cnt += (s[i + 1] != '0');
            cnt += (s[i + 2] != '2');
            cnt += (s[i + 3] != '6');
            make2026 = min(make2026, cnt);
        }
 
        int break2025 = 0;
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") {
                break2025++;
            }
        }
 
        cout << min(make2026, break2025) << "
";
    }
    return 0;
}