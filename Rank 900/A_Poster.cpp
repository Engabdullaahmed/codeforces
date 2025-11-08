#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int k, n;
    cin >> k >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << "PRINT " << s[i] << endl;
            cout << "RIGHT" << endl;
        }
        cout << "PRINT " << s[s.size() - 1] << endl;
    }
    else if (n == k)
    {
        int x = s.size();
        x--;
        for (int i = x; i > 0; i--)
        {
            cout << "PRINT " << s[i] << endl;
            cout << "LEFT" << endl;
        }
        cout << "PRINT " << s[0] << endl;
    }
    else
    {
        int x;

        if (n % 2 == 0)
        {
            x = k / 2;
            int m = n;
            if (n <= x)
            {
                while (m > 1)
                {
                    cout << "LEFT" << endl;
                    m--;
                }
                for (int i = 0; i < s.size() - 1; i++)
                {
                    cout << "PRINT " << s[i] << endl;
                    cout << "RIGHT" << endl;
                }
                cout << "PRINT " << s[s.size() - 1] << endl;
            }
            else if (n >= x + 1)
            {
                while (m < k)
                {
                    cout << "RIGHT" << endl;
                    m++;
                }
                int x = s.size();
                x--;
                for (int i = x; i > 0; i--)
                {
                    cout << "PRINT " << s[i] << endl;
                    cout << "LEFT" << endl;
                }
                cout << "PRINT " << s[0] << endl;
            }
        }
        else
        {
            x = ceil(k / 2);
            int m = n;
            if (n <= x)
            {
                while (m > 1)
                {
                    cout << "LEFT" << endl;
                    m--;
                }
                for (int i = 0; i < s.size() - 1; i++)
                {
                    cout << "PRINT " << s[i] << endl;
                    cout << "RIGHT" << endl;
                }
                cout << "PRINT " << s[s.size() - 1] << endl;
            }
            else
            {
                while (m < k)
                {
                    cout << "RIGHT" << endl;
                    m++;
                }
                int x = s.size();
                x--;
                for (int i = x; i > 0; i--)
                {
                    cout << "PRINT " << s[i] << endl;
                    cout << "LEFT" << endl;
                }
                cout << "PRINT " << s[0] << endl;
            }
        }
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
