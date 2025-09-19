#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int arr2[k];
        int ans;
        int k2 = k;
        k2--;
        int mn = INT_MAX;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            arr2[i] = x;
        }
        sort(arr, arr + x);
        reverse(arr, arr + x);
        sort(arr2, arr2 + k);

        for (int j = 0; j < k; j++)
        {
            if (arr2[j] == 1)
            {
                arr[j] = 0;
            }
            else
            {
                for (int i = j - 1 - n; i < n; i++)
                {
                    int z = arr[i];
                    if (z < mn)
                    {
                        mn = z;
                        index = i;
                    }
                }
                arr[index] = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
    }
}