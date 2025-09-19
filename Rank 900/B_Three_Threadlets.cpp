#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        int aa, b, c;
        cin >> aa >> b >> c;
        a[0] = aa;
        a[1] = b;
        a[2] = c;
        sort(a, a + 3);
        int counter = 0;
        while (a[1] > a[0] && counter < 3)
        {
            a[1] -= a[0];
            counter++;
        }
        while (a[2] > a[0] && counter < 3)
        {
            a[2] -= a[0];
            counter++;
        }
        if (a[1] != a[0] || a[2] != a[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}