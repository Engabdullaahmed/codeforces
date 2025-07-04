#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*A. Letter Home
time limit per test
1 second
memory limit per test
256 megabytes

You are given an array of distinct integers x1,x2,…,xn
and an integer s

.

Initially, you are at position pos=s
on the X

axis. In one step, you can perform exactly one of the following two actions:

    Move from position pos

to position pos+1
.
Move from position pos
to position pos−1

    .

A sequence of steps will be considered successful if, during the entire journey, you visit each position xi
on the X axis at least once. Note that the initial position pos=s

is also considered visited.

Your task is to determine the minimum number of steps in any successful sequence of steps.
Input

Each test consists of multiple test cases. The first line contains a single integer t
(1≤t≤1000

) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n
and s (1≤n≤10, 1≤s≤100

) — the number of positions to visit and the starting position.

The second line of each test case contains n
integers x1,x2,…,xn (1≤xi≤100). It is guaranteed that for all 1≤i<n, it holds that xi<xi+1

.
Output

For each test case, output the minimum number of steps in any successful sequence of steps.
Example
Input
Copy

12
1 1
1
1 2
1
1 1
2
2 1
2 3
2 2
1 3
2 3
1 2
3 1
1 2 3
3 2
1 3 4
3 3
1 2 3
4 3
1 2 3 10
5 5
1 2 3 6 7
6 6
1 2 3 9 10 11

Output
Copy

0
1
1
2
3
2
2
4
2
11
8
15

Note

In the first test case, no steps need to be taken, so the only visited position will be 1

.

In the second test case, the following path can be taken: 2→1
. The number of steps is 1

.

In the third test case, the following path can be taken: 1→2
. The number of steps is 1

.

In the fifth test case, the following path can be taken: 2→1→2→3
. The number of steps is 3.*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = *min_element(arr, arr + n);
        int mx = *max_element(arr, arr + n);
        int ans = 0;
        if (s > mn && s < mx)
        {
            int checker_ = abs(mn - s);
            int checker_2 = abs(mx - s);
            if (checker_ < checker_2)
            {
                ans = checker_ * 2 + checker_2;
            }
            else if (checker_2 < checker_)
            {
                ans = checker_ + checker_2 * 2;
            }
            else
            {
                ans = checker_ * 2 + checker_2;
            }
        }
        else if (s <= mn && s < mx)
        {
            ans = abs(s - mx);
        }
        else
        {
            ans = abs(s - mn);
        }

        cout << ans << endl;
    }
}