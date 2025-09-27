#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int freq[27] = {};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    bool flage = true;
    for (int i = 0; i < 27; i++)
    {
        if (freq[i] % 2 != 0 && freq[i] != 0)
        {
            flage = false;
            break;
        }
    }
    bool flage2 = true;
    if (flage)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() / 2 + i])
            {
                flage2 = false;
                break;
            }
        }
        if (flage2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
    while (t--)
    {
        solve();
    }
}