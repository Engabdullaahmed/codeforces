#include <bits/stdc++.h>
using namespace std;
/*C. Game of Mathletes
time limit per test
2 seconds
memory limit per test
256 megabytes

Alice and Bob are playing a game. There are n
(n is even) integers written on a blackboard, represented by x1,x2,…,xn. There is also a given integer k and an integer score that is initially 0. The game lasts for n2

turns, in which the following events happen sequentially:

    Alice selects an integer from the blackboard and erases it. Let's call Alice's chosen integer a

.
Bob selects an integer from the blackboard and erases it. Let's call Bob's chosen integer b
.
If a+b=k
, add 1

    to score.

Alice is playing to minimize the score while Bob is playing to maximize the score. Assuming both players use optimal strategies, what is the score after the game ends?
Input

The first line contains an integer t
(1≤t≤104

) — the number of test cases.

The first line of each test case contains two integers n
and k (2≤n≤2⋅105,1≤k≤2⋅n, n

is even).

The second line of each test case contains n
integers x1,x2,…,xn (1≤xi≤n

) — the integers on the blackboard.

It is guaranteed that the sum of n
over all test cases does not exceed 2⋅105

.
Output

For each test case, output the score if both players play optimally.
Example
Input
Copy

4
4 4
1 2 3 2
8 15
1 2 3 4 5 6 7 8
6 1
1 1 1 1 1 1
16 9
3 1 4 1 5 9 2 6 5 3 5 8 9 7 9 3

Output
Copy

2
1
0
4

Note

In the first test case, one way the game may go is as follows:

    Alice selects 1

and Bob selects 3. The score increases as 1+3=4. Now the two integers remaining on the blackboard are 2 and 2
.
Alice and Bob both select 2
. The score increases as 2+2=4

    .
    The game ends as the blackboard now has no integers.

In the third test case, it is impossible for the sum of Alice and Bob's selected integers to be 1
, so we answer 0

.

Note that this is just an example of how the game may proceed for demonstration purposes. This may not be Alice or Bob's most optimal strategies.

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            // 1 2 3 2
            //
            int x;
            cin >> x;
            if (1 <= x && x <= k)
                freq[x]++;
        }

        long long counter = 0;
        vector<char> b(n + 1, 0);

        for (int x = 1; x <= n; ++x)
        {
            if (b[x])
                continue;
            int y = k - x;
            if (y < 1 || y > n)
            {
                b[x] = 1;
                continue;
            }
            if (x == y)
            {

                counter += freq[x] / 2;
                b[x] = 1;
            }
            else
            {
                counter += min(freq[x], freq[y]);
                b[x] = b[y] = 1;
            }
        }

        cout << counter << '\n';
    }
    return 0;
}