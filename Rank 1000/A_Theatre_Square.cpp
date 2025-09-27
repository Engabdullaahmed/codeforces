#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, a;
    cin >> n >> m >> a;
    int base = 0;
    int counter = 0;
    if (n >= a && m >= a)
    {
        long long c = n * m;
        long long aa = a * a;
        base = c / aa;
        if (n % a != 0)
            counter++;
        if (m % a != 0)
            counter++;
    }
    else
    {
        counter = 1;
    }

    cout << base + counter << endl;
}
