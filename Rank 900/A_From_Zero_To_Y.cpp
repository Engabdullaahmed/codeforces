#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int counter = 0;

    for (int i = 9; i >= 0;)
    {

        int m = y;
        y -= x * (pow(10, i));
        counter++;
        if (y < 0)
        {
            y = m;
            i--;
            counter--;
        }
        else if (y == 0)
        {
            break;
        }
    }
    while (y >= 0)
    {
        y -= 1;
        counter++;
    }
    cout << --counter << endl;
}

int main()
{
    int beboo{1};
    cin >> beboo;
    while (beboo--)
    {
        solve();
    }
    return 0;
}







