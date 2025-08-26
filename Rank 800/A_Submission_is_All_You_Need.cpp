#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int freq[101] = {0}; 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());

        int mex = 0;
        ll sum_remaining = 0;

        for (int i = 0; i <= 50; i++)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
                mex++;
            }
            else
            {
                break;
                
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] > 0)
            {
                sum_remaining += a[i];
                freq[a[i]]--;
            }
        }

        ll ans = mex + sum_remaining;
        cout << ans << endl;
    }
}
