/*
You have a matrix 2×2 filled with distinct integers. You want your matrix to become beautiful. The matrix is beautiful if the following two conditions are satisfied:

- in each row, the first element is smaller than the second element;
- in each column, the first element is smaller than the second element.

You can perform the following operation on the matrix any number of times: rotate it clockwise by 90 degrees, so the top left element shifts to the top right cell,
the top right element shifts to the bottom right cell, and so on:
Determine if it is possible to make the matrix beautiful by applying zero or more operations.

Input
The first line contains one integer t (1≤t≤1000) — the number of test cases.
Each test case consists of two lines. Each of those lines contains two integers — the elements of the corresponding row of the matrix. 
In each matrix, all four elements are distinct integers from 1 to 100.

Output
For each test case, print YES if the matrix can become beautiful, or NO otherwise. You may print each letter in any case (YES, yes, 
Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).

Problem statement: https://codeforces.com/problemset/problem/1772/B
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int arr[2][2] = { {0, 0}, { 0, 0 } };
    while (T--)
    {
        cin >> arr[0][0];
        cin >> arr[0][1];
        cin >> arr[1][0];
        cin >> arr[1][1];

        int rotations = 4;
        bool found = false;
        while (rotations) {
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1]) {
                cout << "YES\n";
                found = true;
                break;
            }
            else {
                int a = arr[0][0];
                int b = arr[0][1];
                int c = arr[1][0];
                int d = arr[1][1];
                arr[0][0] = c;
                arr[0][1] = a;
                arr[1][0] = d;
                arr[1][1] = b;
                rotations--;
            }
        }
        if (!found) {
            cout << "NO\n";
        }
    }
        
    return 0;
}

