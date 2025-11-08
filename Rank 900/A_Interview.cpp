#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x, y;

    if (n % a == 0)
    {
        x = n / a;
    }
    else
    {
        x = (n / a) + 1;
    }
    if (m % a == 0)
    {
        y = m / a;
    }
    else
    {
        y = (m / a) + 1;
    }
    cout << x * y;
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
