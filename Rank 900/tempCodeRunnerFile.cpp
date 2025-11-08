#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 1 || m == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int beboo{1};
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
}
