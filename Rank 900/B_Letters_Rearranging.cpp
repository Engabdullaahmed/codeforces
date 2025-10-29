#include <bits/stdc++.h>
using namespace std;

int check_palindrom(string s)
{
    deque<int> dq;
    for (auto i : s)
    {
        dq.push_back(i);
    }
    while (dq.size() > 1)
    {
        if (dq.front() != dq.back())
        {
            break;
        }
        dq.pop_back();
        dq.pop_front();
    }
    if (dq.size() <= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    string s;
    cin >> s;

    int x = check_palindrom(s);

    if (x == 1)
    {
        sort(s.begin(), s.end());
        int m = check_palindrom(s);
        if (m == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    else
    {
        cout << s << endl;
    }
}

int main()
{
    int beboo;
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
    return 0;
}
