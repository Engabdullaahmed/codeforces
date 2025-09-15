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
        vector<int> freq(n+1, 0);
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            freq[m]++;
        }
        bool win = false;
        for (int i = n; i >= 1; i--) { 
            if (freq[i] % 2 == 1) {
                win = true;
                break;
            }
        }
        cout << (win ? "YES\n" : "NO\n");
    }
}
