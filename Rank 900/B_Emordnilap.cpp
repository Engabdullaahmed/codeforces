#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;   // for example input 100

    long long ans = 1;  // use long long (int will overflow very fast!)
    while (x > 0)
    {
        ans *= x;
        x--;
    }
    cout << ans * 2 << "\n";   // this will print x! (factorial of x)
}
