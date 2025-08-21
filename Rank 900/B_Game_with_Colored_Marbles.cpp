#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> freq(m + 1, 0);

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int count_non_repeated = 0;
        int count_repeated = 0;

        for (int f : freq)
        {
            if (f > 0)
            {
                if (f == 1)
                    count_non_repeated++;
                else
                    count_repeated++;
            }
        }

        int alice_moves = (m + 1) / 2;
        int half_non_repeated = (count_non_repeated + 1) / 2;

        int ans = 2 * half_non_repeated + min(count_repeated, alice_moves - half_non_repeated);

        cout << ans << "\n";
    }
}
