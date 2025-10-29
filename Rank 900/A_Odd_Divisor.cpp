#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    bool falge = true;

    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n == 1)
        {
            falge = false;
        }
    }
    else
    {
        falge = true;
    }

    if (falge)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int beboo{1};
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
    return 0;
}
