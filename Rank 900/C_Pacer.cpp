#include <bits/stdc++.h>
using namespace std;
/*B. Maximum Cost Permutation
https://codeforces.com/contest/2144/problem/B
time limit per test
2 seconds
memory limit per test
256 megabytes

Recall that a permutation of length n
is a sequence of length n such that each integer from 1 to n

appears in it exactly once.

Let's define the cost of a permutation as the minimum length of its contiguous subsegment (possibly empty) that needs to be sorted so that the entire permutation becomes sorted in ascending order.

You are given an integer array p
consisting of integers from 0 to n, where no positive (strictly greater than zero) integer appears more than once. You should replace zeros with integers so that the array p

becomes a permutation.

Your task is to calculate the maximum possible cost of the resulting permutation.
Input

The first line contains a single integer t
(1≤t≤104

) — the number of test cases.

The first line of each test case contains a single integer n
(1≤n≤2⋅105

).

The second line contains n
integers p1,p2,…,pn (0≤pi≤n

). No positive integer appears more than once in this sequence.

Additional constraint on the input: the sum of n
over all test cases doesn't exceed 2⋅105

.
Output

For each test case, print a single integer — the maximum possible cost of the resulting permutation.
Example
Input
Copy

4
5
1 0 4 0 5
3
0 0 0
4
1 2 3 0
3
0 3 2

Output
Copy

3
3
0
2

Note

In the first example, you can make a permutation [1,3,4,2,5]
with the cost 3, because you have to sort segment [2,4]

.

In the second example, you can make a permutation [2,3,1]
with the cost 3, because you have to sort segment [1,3]

.

In the third example, there is only one possible permutation — [1,2,3,4]
, with the cost 0

, because the permutation is already sorted.

In the fourth example, there is only one possible permutation — [1,3,2]
, with the cost 2, because you have to sort segment [2,3].*/
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int arr2[n];
        int arr3[n];
        int count_0 = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            arr[i] = m;
            if (m == 0)
            {
                count_0++;
            }
        }
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            arr2[i] = c;
            arr3[i] = c;
            c++;
        }
        if (count_0 && n == 1)
        {
            cout << 0 << endl;
        }
        else if (count_0 == n)
        {
            cout << n << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    int q = arr[i];
                    q--;
                    arr2[q] = -1;
                }
            }
            sort(arr2, arr2 + n);
            reverse(arr2, arr2 + n);
            int u = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = arr2[u];
                    u++;
                }
            }

            int l = -1, r = -1;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] != arr3[i])
                {
                    l = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] != arr3[i])
                {
                    r = i;
                    break;
                }
            }

            if (l == -1 || r == -1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << r - l + 1 << endl;
            }
        }
    }
}