#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int counter = 0;

void solve()
{
    string s;
    cin >> s;
    if (s[1] == '+')
    {
        counter += 1;
    }
    else
    {
        counter -= 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    cout << counter;
}