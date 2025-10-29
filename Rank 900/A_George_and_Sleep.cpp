#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s_h, s_m, t_h, t_m;
    char a, b;
    cin >> s_h >> a >> s_m >> t_h >> b >> t_m;

    int total_h = (s_h - t_h);
    int total_m = (s_m - t_m);

    if (total_m < 0)
    {
        total_m += 60;
        total_h--;
    }
    if (total_h < 0)
    {
        total_h += 24;
    }

    if (total_h < 10)
    {
        if (total_m > 9)
        {
            cout << "0" << total_h << ":" << total_m;
        }
        else
        {
            cout << "0" << total_h << ":" << "0" << total_m;
        }
    }
    else
    {
        if (total_m > 9)
        {
            cout << total_h << ":" << total_m;
        }
        else
        {
            cout << total_h << ":" << "0" << total_m;
        }
    }
}

int main()
{
    int beboo{1};
    // cin >> beboo;
    while (beboo--)
    {
        solve();
    }
    return 0;
}
