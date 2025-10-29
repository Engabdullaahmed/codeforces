#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{

    int t;
    cin >> t;
    string s;
    int x;
    stack<int> st;
    while (t--)
    {

        cin >> s;
        if (s == "push")
        {
            cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            st.pop();
        }
        else
        {
            cout << st.top() << endl;
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

    return 0;
}
