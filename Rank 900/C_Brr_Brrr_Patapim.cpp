#include <bits/stdc++.h>
using namespace std;
/*C. Brr Brrr Patapim
time limit per test
2 seconds
memory limit per test
256 megabytes

Brr Brrr Patapim is trying to learn of Tiramisù's secret passcode, which is a permutation∗
of 2⋅n elements. To help Patapim guess, Tiramisù gave him an n×n grid G, in which Gi,j (or the element in the i-th row and j-th column of the grid) contains pi+j, or the (i+j)

-th element in the permutation.

Given this grid, please help Patapim crack the forgotten code. It is guaranteed that the permutation exists, and it can be shown that the permutation can be determined uniquely.

∗
A permutation of m integers is a sequence of m integers which contains each of 1,2,…,m exactly once. For example, [1,3,2] and [2,1] are permutations, while [1,2,4] and [1,3,2,3]

are not.
Input

The first line contains an integer t
 — the number of test cases (1≤t≤200

).

The first line of each test case contains an integer n
(1≤n≤800

).

Each of the following n
lines contains n integers, giving the grid G. The first of these lines contains G1,1,G1,2,…,G1,n; the second of these lines contains G2,1,G2,2,…,G2,n, and so on. (1≤Gi,j≤2⋅n

).

It is guaranteed that the grid encodes a valid permutation, and the sum of n
over all test cases does not exceed 800

.
Output

For each test case, please output 2n
numbers on a new line: p1,p2,…,p2n

.
Example
Input
Copy

3
3
1 6 2
6 2 4
2 4 3
1
1
2
2 3
3 4

Output
Copy

5 1 6 2 4 3 
2 1 
1 2 3 4 

*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> G(2 * n + 1, vector<int>(2 * n + 1));
        vector<int> p(2 * n + 1, 0);
        set<int> all;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> G[i][j];
                all.insert(G[i][j]);
                p[i + j] = G[i][j];
            }
        }

        // find missing number
        for (int x = 1; x <= 2 * n; x++)
        {
            if (!all.count(x))
            {
                p[1] = x;
                break;
            }
        }

        for (int i = 1; i <= 2 * n; i++)
            cout << p[i] << " ";
        cout << "\n";
    }
}
