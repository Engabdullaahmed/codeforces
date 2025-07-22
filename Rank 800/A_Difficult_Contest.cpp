#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 3)
        {
            if (s == "FFT" || s == "NTT")
            {
                sort(s.begin(), s.end());
                reverse(s.begin(), s.end());
            }
            cout << s << endl;
        }
        else
        {
            int counter = 0;
            for (long long i = 0; i < s.size(); i++)
            {
                if (s[i] == 'F')
                {
                    if (s[i + 1] == 'F' && s[i + 2] == 'T')
                    {
                        counter++;
                        i += 2;
                        break;
                    }
                }
                else if (s[i] == 'N')   
                {
                    if (s[i + 1] == 'T' && s[i + 2] == 'T')
                    {
                        counter++;
                        i += 2;
                        break;
                    }
                }
            }
            if (counter >= 1)
            {
                sort(s.begin(), s.end());
                reverse(s.begin(), s.end());
                cout << s << endl;
            }
            else
            {
                cout << s << endl;
            }
        }
    }
}