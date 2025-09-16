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
        string s2;
        cin >> s;
        bool cc = true;
        long long count_0 = 0;
        long long count_1 = 0;
        if (s.size() > 2)
        {
            // get new string
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    s2 += s[i];
                    cc = true;
                }
                else if (s[i] == '0' && cc)
                {
                    cc = false;
                    s2 += s[i];
                }
            }
            // deal with new string
            for (int i = 0; i < s2.size(); i++)
            {
                if (s2[i] == '0')
                {
                    count_0++;
                }
                else
                {
                    count_1++;
                }
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                {
                    count_0++;
                }
                else
                {
                    count_1++;
                }
            }
        }

        if (count_0 < count_1)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
}