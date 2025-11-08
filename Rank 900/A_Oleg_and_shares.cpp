#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int mn = *min_element(x.begin(), x.end());
    long long counter = 0;
    bool flage = false;
    for (int i = 0; i < n; i++)
    {
        if (mn != x[i])
        {
            int z = x[i] - mn;
            if (z % k != 0)
            {
                flage = true;
                break;
            }
            else
            {
                counter += z / k;
            }
        }
    }
    if (flage)
    {
        cout << -1;
    }
    else
    {
        cout << counter;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int beboo{1};
    // cin >> beboo;
    while (beboo--)
    {
        solve();
    }
}
