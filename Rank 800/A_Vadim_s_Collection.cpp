#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int m[10] = {0};
        for (char c : s)
        {
            m[c - '0']++;
        }

        string ans = "";
        for (int i = 0; i < 10; i++)
        {
            int min_required = 9 - i;
            for (int d = min_required; d < 10; d++)
            {
                if (m[d] > 0)
                {
                    ans += (char)(d + '0');
                    m[d]--;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}
