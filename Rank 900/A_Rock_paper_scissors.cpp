#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string c[3];
    int win = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    int r = 0;
    int p = 0;
    int s = 0;
    bool falge_1 = false;
    bool flage_2 = false;
    bool flage_3 = false;
    int index_r = 0;
    int index_p = 0;
    int index_s = 0;
    for (int i = 0; i < 3; i++)
    {
        if (c[i] == "rock")
        {
            r++;
        }
        else if (c[i] == "paper")
        {
            p++;
        }
        else if (c[i] == "scissors")
        {
            s++;
        }

        if (r == 1 && !falge_1)
        {
            index_r = i;
            falge_1 = true;
        }
        else if (p == 1 && !flage_2)
        {
            index_p = i;
            flage_2 = true;
        }
        else if (s == 1 && !flage_3)
        {
            index_s = i;
            flage_3 = true;
        }
    }
    int sum = r + p + s;
    if (sum == 3 && r == p && p == s || r == 3 || p == 3 || s == 3)
    {
        cout << '?';
    }
    else if (p == 2 && r == 1 || r == 2 && s == 1 || s == 2 && p == 1)
    {
        cout << '?';
    }
    else
    {
        if (p == 0)
        {
            // now i have
            // r s
            // I remove at prev all if i have that winner big than lose
            // now just i have one winner and two lose
            if (index_r == 0)
            {
                cout << "F";
            }
            else if (index_r == 1)
            {
                cout << "M";
            }
            else
            {
                cout << "S";
            }
        }
        else if (r == 0)
        {
            // p s
            if (index_s == 0)
            {
                cout << "F";
            }
            else if (index_s == 1)
            {
                cout << "M";
            }
            else
            {
                cout << "S";
            }
        }
        else
        {
            if (index_p == 0)
            {
                cout << "F";
            }
            else if (index_p == 1)
            {
                cout << "M";
            }
            else
            {
                cout << "S";
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
