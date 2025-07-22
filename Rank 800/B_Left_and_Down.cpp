#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long steps_x = (a + k - 1) / k;
        long long steps_y = (b + k - 1) / k;
        cout << max(steps_x, steps_y) << '\n';
    }
}