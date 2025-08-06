#include <bits/stdc++.h>
/*. Expensive Number
time limit per test
1 second
memory limit per test
256 megabytes

The cost of a positive integer n
is defined as the result of dividing the number n

by the sum of its digits.

For example, the cost of the number 104
is 1041+0+4=20.8, and the cost of the number 111 is 1111+1+1=37

.

You are given a positive integer n
that does not contain leading zeros. You can remove any number of digits from the number n

(including none) so that the remaining number contains at least one digit and is strictly greater than zero. The remaining digits cannot be rearranged. As a result, you may end up with a number that has leading zeros.

For example, you are given the number 103554
. If you decide to remove the digits 1, 4, and one digit 5, you will end up with the number 035, whose cost is 0350+3+5=4.375

.

What is the minimum number of digits you need to remove from the number so that its cost becomes the minimum possible?
Input

The first line contains an integer t
(1≤t≤1000

) — the number of test cases.

The only line of each test case contains a positive integer n
(1≤n<10100

) without leading zeros.
Output

For each test case, output one integer on a new line — the number of digits that need to be removed from the number so that its cost becomes minimal.
Example
Input
Copy

4
666
13700
102030
7

Output
Copy

2
4
3
0

*/
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // 10 2 030 take last 3 number and print
        // 13700 take only one number
        // idea search if zero at string or not
        // if zero is there will count it and number before it
        // else no zero just print all number subtrack by on
        // if number only one number will print zero

        // i meet number and counter all zero after it
        string s;
        cin >> s;

        int n = s.size();
        bool flag = 0;
        int count_zero = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                // now i meet number
                flag = 1;
            }
            // this mean  number there is before number like  03
            // this mean i meet number and
            else if (flag == 1)
            {
                count_zero++;
            }
        }
        cout << n - (count_zero + 1) << endl;
    }
    return 0;
}