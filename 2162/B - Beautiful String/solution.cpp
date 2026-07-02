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
 
        int zero = 0, one = 0;
        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }
 
        if (zero == 0 || one == 0) {
            // Already all 0s or all 1s — palindrome, no need to remove anything
            cout << 0 << "
";
        } else {
            // Remove all of the less frequent character
            if (zero <= one) {
                cout << zero << "
";
                for (int i = 0; i < n; i++) {
                    if (s[i] == '0') cout << i + 1 << " ";
                }
                cout << "
";
            } else {
                cout << one << "
";
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1') cout << i + 1 << " ";
                }
                cout << "
";
            }
        }
    }
 
    return 0;
}