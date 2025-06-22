#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        int counter = 0;

        if (x < y)
        {
            counter++;
            while (k -= x)
            {
                if (k < a)
                {
                    break;
                }
                counter++;
            }
            if (k >= b)
            {
                counter++;
                while (k -= y)
                {
                    if (k < b)
                    {
                        break;
                    }
                    counter++;
                }
            }
            cout << counter << endl;
        }
        else if (y < x)
        {
            counter++;
            while (k -= y)
            {
                if (k < b)
                {
                    break;
                }
                counter++;
            }
            if (k >= a)
            {
                counter++;
                while (k -= x)
                {
                    if (k < a)
                    {
                        break;
                    }
                    counter++;
                }
            }
            cout << counter << endl;
        }

        else
        {
            int z = min(a, b);
            if (k < a && k < b)
            {
                cout << 0 << endl;
            }
            else
            {
                while (true)
                {
                    counter++;
                    k -= a;
                    if (k < z)
                    {
                        break;
                    }
                }
                cout << counter << endl;
            }
        }
    }
}