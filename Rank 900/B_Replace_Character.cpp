#include <bits/stdc++.h>
using namespace std;
/*B. Replace Character
time limit per test
1 second
memory limit per test
256 megabytes

You're given a string s
of length n

, consisting of only lowercase English letters.

You must do the following operation exactly once:

    Choose any two indices i

and j (1≤i,j≤n). You can choose i=j
.
Set si:=sj

    .

You need to minimize the number of distinct permutations†
of s

. Output any string with the smallest number of distinct permutations after performing exactly one operation.

†

A permutation of the string is an arrangement of its characters into any order. For example, "bac" is a permutation of "abc" but "bcc" is not.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains n
(1≤n≤10) — the length of string s

.

The second line of each test case contains s
of length n

. The string contains only lowercase English letters.
Output

For each test case, output the required s

after applying exactly one operation. If there are multiple solutions, print any of them.
Example
Input
Copy

6
3
abc
4
xyyx
8
alphabet
1
k
10
aabbccddee
6
ttbddq

Output
Copy

cbc
yyyx
alphaaet
k
eabbccddee
tttddq

Note

In the first test case, we can obtain the following strings in one operation: "abc", "bbc", "cbc", "aac", "acc", "aba", and "abb".

The string "abc" has 6

distinct permutations: "abc", "acb", "bac", "bca", "cab", and "cba".

The string "cbc" has 3
distinct permutations: "bcc", "cbc", and "ccb", which is the lowest of all the obtainable strings. In fact, all obtainable strings except "abc" have 3 permutations, so any of them would be accepted.*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int freq[26] = {0};
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }
        int mn = INT_MIN;

        int chec = 0;

        bool flag = false;
        char max_char;
        char min_char2;

        // get mx number and get min one  and greater than zero
        int mx = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > mn)
            {
                max_char = 'a' + i;
                mn = freq[i];
            }
            if (freq[i] > 0 && freq[i] < mx)
            {
                min_char2 = 'a' + i;
                mx = freq[i];
            }
        }

        // like abc
        if (freq[max_char - 'a'] == freq[min_char2 - 'a'])
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != max_char)
                {
                    s[i] = max_char;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {

                if (s[i] == min_char2)
                {
                    s[i] = max_char;
                    break;
                }
            }
        }
        cout << s << endl;
    }
}