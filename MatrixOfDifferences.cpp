/*
Problem Statement:
For a square matrix of integers of size n×n, let's define its beauty as follows: for each pair of side-adjacent elements x and y,
write out the number |x−y|, and then find the number of different numbers among them.
For example, for the matrix (1432) the numbers we consider are |1−3|=2, |1−4|=3, |3−2|=1 and |4−2|=2; there are 3 different numbers among them (2, 3 and 1), 
which means that its beauty is equal to 3.
You are given an integer n. You have to find a matrix of size n×n, where each integer from 1 to n2 occurs exactly once, 
such that its beauty is the maximum possible among all such matrices.

Input
The first line contains a single integer t (1≤t≤49) – the number of test cases.
The first (and only) line of each test case contains a single integer n (2≤n≤50).

Output
For each test case, print n rows of n integers — a matrix of integers of size n×n, where each number from 1 to n2 occurs exactly once,
such that its beauty is the maximum possible among all such matrices. If there are multiple answers, print any of them.

Problem statement Link: https://codeforces.com/problemset/problem/1783/B

*/



#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v;
        int a = 1; int b = n * n;
        for (int i = 1; i <= n * n; i++) {
            if (i % 2 == 0) {
                v.push_back(a++);
            }
            else {
                v.push_back(b--);
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            int n1 = n;
            if (i % 2 == 0) {
                while (n1--) {
                    cout << v[flag++] <<" ";
                }
                flag--;
            }
            else {
                flag += n;
                while (n1--) {
                    cout << v[flag--] <<" ";
                }
                flag += n;
                flag++;
            }
            cout << "\n";
        }


    }
    
    return 0;
}
