#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==2 && a[0] == a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < n -1; i++)
            {
                if(a[i] == 0 && a[i+1]==0)
                {
                    flag = true;
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
              cout << "NO" << endl;
            }

            
        }
    }
    
}