#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*A. Wonderful Sticks
time limit per test
1 second
memory limit per test
256 megabytes

You are the proud owner of n
sticks. Each stick has an integer length from 1 to n

. The lengths of the sticks are distinct.

You want to arrange the sticks in a row. There is a string s
of length n−1

that describes the requirements of the arrangement.

Specifically, for each i
from 1 to n−1

:

    If si=<

, then the length of the stick at position i+1
must be smaller than all sticks before it;
If si=>
, then the length of the stick at position i+1

    must be larger than all sticks before it.

Find any valid arrangement of sticks. We can show that an answer always exists.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains a single integer n
(2≤n≤100

) — the number of sticks.

The second line of each test case contains a single string s
of length n−1 consisting of characters < and >

 — describing the requirements of the arrangement.
Output

For each test case, output n
integers a1,a2,…,an (1≤ai≤n, the ai

are distinct) — the lengths of the sticks in order. If there are multiple solutions, print any of them.
Example
Input
Copy

5
2
<
5
<<><
2
>
3
<>
7
><>>><

Output
Copy

2 1 
4 3 2 5 1 
1 2 
2 1 3 
3 4 2 5 6 7 1 

Note

For the first test case, the requirements of the arrangement are as follows:

    s1=<

, which means a2 is smaller than a1

    .

Thus, one possible arrangement is [2,1]

.

For the second test case, the requirements of the arrangement are as follows:

    s1=<

, which means a2 is smaller than a1
;
s2=<
, which means a3 is smaller than a1 and a2
;
s3=>
, which means a4 is larger than a1, a2, and a3
;
s4=<
, which means a5 is smaller than a1, a2, a3, and a4

    .

Thus, one possible arrangement is [4,3,2,5,1]
.*/
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        // really  not easy to solve this problem
        // but the solution is simple

        
        int lift = 1;
        int right  = n;
        vector<int> a(n);
        for (int i = n - 2; i >= 0; i--)   // decrease i by two which we
        // we have two number first one and last number 
        {
            if (s[i] == '<')
            {
                a[i + 1] = lift;
                lift++;
            }
            if (s[i] == '>')
            {
                a[i + 1] = right ;
                right --;
            }
        }
        a[0] = lift;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
}
