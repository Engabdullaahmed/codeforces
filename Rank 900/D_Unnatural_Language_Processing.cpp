#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    string ans = "";
    while (s.size() > 0)
    {
        // check every time the last string
        // cv
        if (s.back() == 'a' || s.back() == 'e')
        {
            cnt = 2;
        }
        else
        {
            cnt = 3;
        }
        while (cnt > 0)
        {
            ans += s.back();
            s.pop_back();
            cnt--;
        }
        ans += '.';
    }
    reverse(ans.begin(), ans.end());
    for (int i = 1; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int beboo;
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
}
