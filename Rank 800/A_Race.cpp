#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*A. Race
time limit per test
2 seconds
memory limit per test
256 megabytes

Alice and Bob participate in a game TV show. When the game starts, the prize will be dropped to a certain point, and whoever gets to it first will get the prize.

Alice decided that she would start running from point a

. Bob, however, has not yet chosen his starting position.

Bob knows that the prize could drop either at point x
or at point y. He also knows that he can reach the prize faster than Alice if the distance from his starting position to the prize is strictly less than the distance from Alice's starting position to the prize. The distance between any two points c and d is calculated as |c−d|

.

Your task is to determine whether Bob can choose an integer point that is guarantee to get to the prize faster, regardless of where it appears (at point x
or y). Bob can choose any integer point, except for a (in particular, he can choose to start in point x, point y, or any other point, but not a

).
Input

The first line contains a single integer t
(1≤t≤1000

) — the number of test cases.

The only line of each test case contains three integers a
, x, y (1≤a,x,y≤100). Points a, x, and y

are pairwise distinct.
Output

For each test case, print "YES" (case insensitive) if Bob can choose an integer point that is guarantee to get to the prize faster, regardless of where it appears. Otherwise, print "NO" (case insensitive).
Example
Input
Copy

3
1 3 4
5 3 1
3 1 5

Output
Copy

YES
YES
NO

Note

In the first example, Bob can choose point 4
. If the prize will be at point x, then Bob's distance is |4−3|=1 and Alice's distance is |1−3|=2. If the prize will be at point y, then Bob's distance is |4−4|=0 and Alice's distance is |1−4|=3

.

In the second example, Bob can choose point 2
. If the prize will be at point x, then Bob's distance is |2−3|=1 and Alice's distance is |5−3|=2. If the prize will be at point y, then Bob's distance is |2−1|=1 and Alice's distance is |5−1|=4

.

In the third example, Bob cannot choose a point to guarantee his victory.*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        //? this solution not check all constrains 
        // int f1 = max(x, y);
    
        // int Alice = abs(a - x);
        // int Alice2 = abs(a - y);
        // if (f1 < Alice && f1 < Alice2 )
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     int m1 = a + 1;
        //     int m2 = a - 1;

        //     int c1 = abs(a - x);
        //     int c2 = abs(a - y);

        //     int c3 = abs(m1 - x);
        //     int c4 = abs(m1 - y);
        //     int c5 = abs(m2 - x);
        //     int c6 = abs(m2 - y);

        //     if (c3 < c1 && c4 < c2 ||  c5 < c1 && c6 < c2)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }

        bool catch_ = false;
        for (int i = 1; i < 101; i++)
        {
            if( abs(i-x) < abs(a-x) && abs(i-y) < abs(a-y) )
            {
                catch_ = true;
                break;
            }
        }
        if(catch_)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}