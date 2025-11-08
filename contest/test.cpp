#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    vector<int> b(m), c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    vector<pair<int, int>> mo;
    for (int i = 0; i < m; i++)
    {
        mo.push_back({b[i], c[i]});
    }
    sort(mo.begin(), mo.end());

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        auto it = a.lower_bound(mo[i].first);
        if (it != a.end())
        {
            int sw = *it;
            a.erase(it);
            a.insert(max(sw, mo[i].second));
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int beboo = 1;
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
    return 0;
}