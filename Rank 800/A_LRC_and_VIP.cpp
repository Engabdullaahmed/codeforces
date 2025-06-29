#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
A. LRC and VIP
time limit per test
1 second
memory limit per test
256 megabytes

You have an array a
of size n — a1,a2,…an

.

You need to divide the n
elements into 2 sequences B and C

, satisfying the following conditions:

    Each element belongs to exactly one sequence.
    Both sequences B

and C
contain at least one element.
gcd
(B1,B2,…,B|B|)≠gcd(C1,C2,…,C|C|) ∗

∗
gcd(x,y) denotes the greatest common divisor (GCD) of integers x and y

.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains an integer n
(2≤n≤100

).

The second line of each test case contains n
integers a1,a2,…,an (1≤ai≤104

).
Output

For each test case, first output Yes
if a solution exists or No if no solution exists. You may print each character in either case, for example YES and yEs

will also be accepted.

Only when there is a solution, output n
integers on the second line. The i-th number should be either 1 or 2. 1 represents that the element belongs to sequence B and 2 represents that the element belongs to sequence C

.

You should guarantee that 1
and 2

both appear at least once.
Example
Input
Copy

3
4
1 20 51 9
4
5 5 5 5
3
1 2 2

Output
Copy

Yes
2 2 1 1
No
Yes
1 2 2

Note

In the first test case, B=[51,9]
and C=[1,20]. You can verify gcd(B1,B2)=3≠1=gcd(C1,C2)

.

In the second test case, it is impossible to find a solution. For example, suppose you distributed the first 3
elements to array B and then the last element to array C. You have B=[5,5,5] and C=[5], but gcd(B1,B2,B3)=5=gcd(C1). Hence it is invalid.*/
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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i]; 
        }
        sort(arr2, arr2 + n);
        // idea here that gcd is must less than the biggest number in the array

        if (arr2[0] == arr2[n - 1])
            cout << "NO" << endl;

        else
        {
            cout << "YES" << endl;

            int mx = arr2[n - 1];
            for (int i = 0; i < n; i++)
            {
                // just make biggest number 1 and all other numbers 2

                if (mx == arr[i])
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
    }
}