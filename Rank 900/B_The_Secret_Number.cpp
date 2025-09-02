#include <bits/stdc++.h>
using namespace std;

// To ensure that no one can guess it, he appended a positive number of zeros to the right of it, thus obtaining a new number
/*this part is verrry tricky
which mean y = x * 10^k

and our equation
n = x + y
n = x + x * 10^k
n = x * (1 + 10^k)
x = n / (1 + 10^k)

that's the key of problem last equation

*/


/*B. The Secret Number
time limit per test
2 seconds
memory limit per test
256 megabytes

Vadim has thought of a number x
. To ensure that no one can guess it, he appended a positive number of zeros to the right of it, thus obtaining a new number y. However, as a precaution, Vadim decided to spread the number n=x+y. Find all suitable x that Vadim could have thought of for the given n

.
Input

Each test consists of several test cases. The first line contains a single integer t
(1≤t≤104)

 — the number of test cases. The following lines describe the test cases.

In a single line of each test case, there is an integer n
 — the number spread by Vadim (11≤n≤1018)

.
Output

For each number n
, output 0 if there are no suitable x. Otherwise, output the number of suitable x, followed by all suitable x

in ascending order.
Example
Input
Copy

5
1111
12
55
999999999999999999
1000000000000000000

Output
Copy

2
11 101
0
1
5
3
999999999 999000999000999 90909090909090909
0

Note

In the first sample, to 11
one can append two zeros to the right, then 11+1100=1111, and to 101 one can append one zero to the right, then 101+1010=1111

.

In the second sample, it is impossible to obtain 12

through the described actions.

    */

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> res;
        long long p = 10;
        for (int i = 1; i <= 18; i++)
        {

            long long z = n / (1 + p);
            if (1 + p > n)
                break;
            else
            {
                if (n % (1 + p) == 0)
                {
                    res.push_back(n / (1 + p));
                }
                p *= 10;
            }
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}