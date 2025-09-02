#include <bits/stdc++.h>
using namespace std;
/*D. Manhattan Circle
time limit per test
2 seconds
memory limit per test
256 megabytes

Given a n
by m grid consisting of '.' and '#' characters, there exists a whole manhattan circle on the grid. The top left corner of the grid has coordinates (1,1), and the bottom right corner has coordinates (n,m)

.

Point (a,b
) belongs to the manhattan circle centered at (h,k) if |h−a|+|k−b|<r, where r

is a positive constant.

On the grid, the set of points that are part of the manhattan circle is marked as '#'. Find the coordinates of the center of the circle.
Input

The first line contains t
(1≤t≤1000

)  — the number of test cases.

The first line of each test case contains n
and m (1≤n⋅m≤2⋅105

) — the height and width of the grid, respectively.

The next n
lines contains m

characters '.' or '#'. If the character is '#', then the point is part of the manhattan circle.

It is guaranteed the sum of n⋅m
over all test cases does not exceed 2⋅105

, and there is a whole manhattan circle on the grid.
Output

For each test case, output the two integers, the coordinates of the center of the circle.
Example
Input
Copy

6
5 5
.....
.....
..#..
.....
.....
5 5
..#..
.###.
#####
.###.
..#..
5 6
......
......
.#....
###...
.#....
1 1
#
5 6
...#..
..###.
.#####
..###.
...#..
2 10
..........
...#......

Output
Copy

3 3
3 3
4 2
1 1
3 4
2 4

*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int counter_ = 0;
        int x, y = 0;
        int col = 0;
        int mx = 0;

        // i need the center point of # at small circle
        // and x , y get first #
        // get number of #
        bool flag = true;
        int center_x = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                
                if (c == '#' && flag)
                {
                    x = i;
                    y = j;      
                    flag = false;
                }
                if (c == '#')
                {
                    col++;
                    mx = max(mx, col);
                    counter_++;
                }
            }
            col = 0;
        }
        // now i get center at small matrix
        int x_ = x ;
        if (counter_ > 1)
        {
            center_x = floor(mx / 2);
            x_++;

            cout << x_ + center_x << " " << y + 1 << endl;
        }
        else
        {
            center_x = x;
            center_x++;
            cout << center_x << " " << y + 1 << endl;
        }
    }
}