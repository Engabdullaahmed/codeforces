#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
B. Tournament
time limit per test
2 seconds
memory limit per test
256 megabytes

You are given an array of integers a1,a2,…,an
. A tournament is held with n players. Player i has strength ai

.

While more than k

players remain,

    Two remaining players are chosen at random;
    Then the chosen player with the lower strength is eliminated. If the chosen players have the same strength, one is eliminated at random.

Given integers j
and k (1≤j,k≤n), determine if there is any way for player j to be one of the last k

remaining players.
Input

The first line contains an integer t
(1≤t≤104

)  — the number of test cases.

The first line of each test case contains three integers n
, j, and k (2≤n≤2⋅105, 1≤j,k≤n

).

The second line of each test case contains n
integers, a1,a2,…,an (1≤ai≤n

).

It is guaranteed that the sum of n
over all test cases does not exceed 2⋅105

.
Output

For each test case, output on a single line "YES" if player j
can be one of the last k

remaining players, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
Example
Input
Copy

3
5 2 3
3 2 4 4 1
5 4 1
5 3 4 5 2
6 1 1
1 2 3 4 5 6

Output
Copy

YES
YES
NO

Note

In the first sample, suppose that players 2
and 5 are chosen. Then player 2 defeats player 5

. Now, the remaining player strengths are
3	2	4	4
Next, suppose that players 3 and 4 are chosen. Then player 3 might defeat player 4. Now, the remaining player strengths are
3	2	4
Player 2 is one of the last three players remaining.

In the third sample, it can be shown that there is no way for player 1
to be the last player remaining.*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = arr[j - 1];
        sort(arr, arr + n);
        int y = arr[n - 1];
        if (x < y && k == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}