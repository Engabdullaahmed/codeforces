#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = x;
    }
    sort(a, a + n);
    sort(b, b + n);

    bool flage = false;
    for (int i = 0; i < n; i++)
    {
        if (b[i] - a[i] > 1 || b[i] - a[i] < 0)
        {
            flage = true;
        }
    }

    if (!flage)
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
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}