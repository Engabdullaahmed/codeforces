#include <bits/stdc++.h>
using namespace std;

void beboo() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, H;
        cin >> N >> H;

        vector<int> diff(N + 2, 0);

        for (int i = 0; i < N; i++) {
            int l, r;
            cin >> l >> r;
            diff[l] += 1;
            if (r + 1 <= N)
                diff[r + 1] -= 1;
        }

        vector<int> zeros(N + 1, 0);
        for (int i = 1; i <= N; i++)
            zeros[i] = zeros[i - 1] + diff[i];

        // prefix sum for zeros
        vector<long long> pref(N + 1, 0);
        for (int i = 1; i <= N; i++)
            pref[i] = pref[i - 1] + zeros[i];

        long long maxZeros = 0;

        for (int i = H; i <= N; i++) {
            long long totalZeros = pref[i] - pref[i - H];
            maxZeros = max(maxZeros, totalZeros);
        }

        long long totalCells = 1LL * H * N;
        cout << totalCells - maxZeros << "\n";
    }
}

int main() {
    cout << "Program by Beboo ⚡\n";
    beboo();
}
