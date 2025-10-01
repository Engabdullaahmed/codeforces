#include <bits/stdc++.h>
using namespace std;
/*A. Arrays
time limit per test
2 seconds
memory limit per test
256 megabytes

You are given two arrays A and B consisting of integers, sorted in non-decreasing order. Check whether it is possible to choose k numbers in array A and choose m numbers in array B so that any number chosen in the first array is strictly less than any number chosen in the second array.
Input

The first line contains two integers nA, nB (1 ≤ nA, nB ≤ 105), separated by a space — the sizes of arrays A and B, correspondingly.

The second line contains two integers k and m (1 ≤ k ≤ nA, 1 ≤ m ≤ nB), separated by a space.

The third line contains nA numbers a1, a2, ... anA ( - 109 ≤ a1 ≤ a2 ≤ ... ≤ anA ≤ 109), separated by spaces — elements of array A.

The fourth line contains nB integers b1, b2, ... bnB ( - 109 ≤ b1 ≤ b2 ≤ ... ≤ bnB ≤ 109), separated by spaces — elements of array B.
Output

Print "YES" (without the quotes), if you can choose k numbers in array A and m numbers in array B so that any number chosen in array A was strictly less than any number chosen in array B. Otherwise, print "NO" (without the quotes).
Examples
Input
Copy

3 3
2 1
1 2 3
3 4 5

Output
Copy

YES

Input
Copy

3 3
3 3
1 2 3
3 4 5

Output
Copy

NO

Input
Copy

5 2
3 1
1 1 1 1 1
2 2

Output
Copy

YES

Note

In the first sample test you can, for example, choose numbers 1 and 2 from array A and number 3 from array B (1 < 3 and 2 < 3).

In the second sample test the only way to choose k elements in the first array and m elements in the second one is to choose all numbers in both arrays, but then not all the numbers chosen in A will be less than all the numbers chosen in B: .
*/
void solve()
{
    long long na, nb;
    cin >> na >> nb;
    long long k, m;
    cin >> k >> m;
    long long arr[na];
    long long arr2[nb];
    for (int i = 0; i < na; i++)
    {
        long long z;
        cin >> z;
        arr[i] = z;
    }
    for (int i = 0; i < nb; i++)
    {
        long long z;
        cin >> z;
        arr2[i] = z;
    }
    sort(arr, arr + na);
    sort(arr2, arr2 + nb);
    reverse(arr2, arr2 + nb);

    if (arr[k - 1] < arr2[m - 1])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}