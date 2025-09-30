#include <bits/stdc++.h>
#define int long long
#define endl '\n'
typedef long long ll;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < ll(s.size() - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
            s.erase(i, 2);
            i -= 2;
            i = max(i, -1ll);
        }
    }
    cout << (ans % 2 == 0 ? "NO" : "YES");
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    //    freopen("qsort.in", "r", stdin);
    //    freopen("qsort.out", "w", stdout);
    int tc = 1;
    //    cin>>tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        solve();
        cout << endl;
    }
}