#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubblesort(int arr[], int n)
{

    int i, j, temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // 0           3
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{

    int x = 10;
    int y = 2;

    int z = x == y;
    int t = x != y;

    cout << z << endl;
    cout << t << endl;
    
}