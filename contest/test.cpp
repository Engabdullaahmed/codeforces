#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());

        ll ans = 0;
        if (n % 2 == 0)
        {
            for (int i = 1; i < n; i += 2)
                ans += a[i];
        }
        else
        {

            ll ans_1 = 0;
            for (int i = 1; i < n - 1; i += 2)
                ans_1 += a[i];
            ans_1 += a[n - 1];

            ll ans_2 = 0;
            for (int i = 0; i < n; i += 2)
                ans_2 += a[i];

            ans = min(ans_1, ans_2);
        }

        cout << ans << '\n';
    }
    return 0;
}
