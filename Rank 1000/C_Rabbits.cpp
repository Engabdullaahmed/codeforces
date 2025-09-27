#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(4 * n, 0);
        vector<int> arr2(4 * n, 0);
        for (int x = 1; x <= n; x++)
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = x;
                    arr[i + x] = x;
                    break;
                    arr2[i] = arr[i];
                }
            }
        }

        for (int i = 0; i < 2 * n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = n;
            }
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}