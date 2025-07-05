#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        for (int i = 0; i < x; i++)
        {
            char c;
            cin >> c;
            s += c;
        }
        if (s.size() == 3)
        {
            if (s[0] == s[1] || s[1] == s[2])
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
            string s1 = s;
            sort(s1.begin(), s1.end());
            int counter = 1;

            int mx = 0;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s1[i] == s1[i + 1])
                {
                    counter++;
                    mx = max(mx, counter);
                }
            }
            if (mx > 2)
            {

                cout << "Yes" << endl;
            }
            else if (mx == 2)
            {
                if (s[0] == s[s.size() - 1])
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}