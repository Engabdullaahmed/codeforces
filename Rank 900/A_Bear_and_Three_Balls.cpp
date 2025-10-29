#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    set<int> s;
    for (int i = 0; i < t; i++)
    {
        int m;
        cin >> m;
        s.insert(m);
    }
    int dif = 0;
    int sum = 0;
    int counter = 1;
    bool flage = false;
    vector<int> v(s.begin(), s.end());

    if (v.size() < 3)
    {
        cout << "NO";
    }
    else
    {

        for (int i = 0; i < v.size() - 2; i++)
        {
            dif = v[i + 2] - v[i];
            if (dif == 2)
            {
                flage = true;
                break;
            }
            else
            {
                dif = 0;
            }
        }
        if (flage)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
