#include <bits/stdc++.h>
using namespace std;
/*A. Alice's Adventures in "Chess"
time limit per test
1 second
memory limit per test
256 megabytes

Alice is trying to meet up with the Red Queen in the countryside! Right now, Alice is at position (0,0)
, and the Red Queen is at position (a,b)

. Alice can only move in the four cardinal directions (north, east, south, west).

More formally, if Alice is at the point (x,y)

, she will do one of the following:

    go north (represented by N), moving to (x,y+1)

;
go east (represented by E), moving to (x+1,y)
;
go south (represented by S), moving to (x,y−1)
; or
go west (represented by W), moving to (x−1,y)

    .

Alice's movements are predetermined. She has a string s

representing a sequence of moves that she performs from left to right. Once she reaches the end of the sequence, she repeats the same pattern of moves forever.

Can you help Alice figure out if she will ever meet the Red Queen?
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains three integers n
, a, b (1≤n, a, b≤10

) — the length of the string and the initial coordinates of the Red Queen.

The second line contains a string s
of length n

consisting only of the characters N, E, S, or W.
Output

For each test case, output a single string "YES" or "NO" (without the quotes) denoting whether Alice will eventually meet the Red Queen.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
Example
Input
Copy

6
2 2 2
NE
3 2 2
NNE
6 2 1
NNEESW
6 10 10
NNEESW
3 4 2
NEE
4 5 5
NEWS

Output
Copy

YES
NO
YES
YES
YES
NO

Note

In the first test case, Alice follows the path (0,0)→N(0,1)→E(1,1)→N(1,2)→E(2,2)

.

In the second test case, Alice can never reach the Red Queen.*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        int x = 0, y = 0;
        bool found = false;
        int counter = 0;

        while (counter < 200)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                    y++;
                else if (s[i] == 'E')
                    x++;
                else if (s[i] == 'S')
                    y--;
                else
                    x--;

                if (x == a && y == b)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
            counter++;
        }

        cout << (found ? "YES" : "NO") << endl;
    }
}
