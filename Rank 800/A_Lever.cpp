#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n];
        int b[n];
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        while (true)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                    flag = false;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {

                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
            }
            ans++;
            if (flag)
            {
                break;
            }
        }
        cout << ans << endl;
    }
}