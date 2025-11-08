#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    while (n--)
    {
        string s;
        cin >> s;
        int x;
        if (s == "push_back")
        {

            cin >> x;
            dq.push_back(x);
        }
        else if (s == "push_front")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "pop_front")
        {
            dq.pop_front();
        }
        else if (s == "pop_back")
        {
            dq.pop_back();
        }
        else if (s == "front")
        {
            cout << dq.front() << endl;
        }
        else if (s == "back")
        {
            cout << dq.back() << endl;
        }
        else if (s == "print")
        {
            cin >> x;

            cout << dq[x - 1] << endl;
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
