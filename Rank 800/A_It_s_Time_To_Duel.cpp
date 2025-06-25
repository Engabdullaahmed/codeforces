#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
A. It's Time To Duel
time limit per test
1 second
memory limit per test
256 megabytes

Something you may not know about Mouf is that he is a big fan of the Yu-Gi-Oh! card game. He loves to duel with anyone he meets. To gather all fans who love to play as well, he decided to organize a big Yu-Gi-Oh! tournament and invited n

players.

Mouf arranged the n
players in a line, numbered from 1 to n. They then held n−1 consecutive duels: for each i from 1 to n−1, player i faced player i+1, producing one winner and one loser per match. Afterward, each player reports a value ai(0≤ai≤1)

:

    0

indicating they won no duels;
1

    indicating they won at least one duel. 

Since some may lie about their results (e.g., reporting a 1
instead of a 0

, or vice versa) to influence prize outcomes, Mouf will cancel the tournament if he can prove any report to be false.

Given the array a

, determine whether at least one player must be lying.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤100

). The description of the test cases follows.

The first line of each test case contains one integer n
(2≤n≤100

) — the number of players in the tournament.

The second line of each test case contains n
integers a1,a2,…,an (0≤ai≤1) — denoting the report of the i

-th player.
Output

For each test case, print "YES" (without quotes) if there is at least one liar among the players, and "NO" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
Example
Input
Copy

6
3
0 1 0
2
0 0
2
1 1
4
0 1 1 1
4
1 0 0 1
7
0 1 0 1 0 1 0

Output
Copy

NO
YES
YES
NO
YES
NO

Note

In the first test case, it is consistent if player 2
defeats both players 1 and 3

, so nobody's report is necessarily false.

In the second test case, in the only match between players 1
and 2

, one must win — but both claimed zero wins, so someone must be lying.

In the third test case, the tournament consists of exactly one duel between players 1
and 2

— but it's impossible for both to win, concluding that at least one report is false.

In the fourth test case, a possible scenario is that player 2
won against player 1, then 3 won against 2, and then 4 won against 3. All reports align, so there is no evidence that someone lied.*/


int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n;
        int a[n];
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0)
            {
                flag = false;
            }
        }
        if(n==2 && a[0] == a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if(a[i] == a[i-1] && a[i]==0)
                {
                    flag = true;
                    break;
                }
             
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
           
            
        }
    }
    
}