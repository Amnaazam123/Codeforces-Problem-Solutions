/*
Problem statement:
AquaMoon has a string a consisting of only 0 and 1. She wants to add + and − between all pairs of consecutive positions to make the absolute value
of the resulting expression as small as possible. Can you help her?

Input
The first line contains a single integer t (1≤t≤2000)  – the number of test cases. The description of test cases follows.
The first line of each test case contains a single integer n (2≤n≤100) — the length of a.
The second line of each test case contains a string a of length n, consisting of only 0 and 1.

Output
For each test case, output a string of length n−1 consisting of − and + on a separate line. If there is more than one assignment of signs that produces the smallest possible absolute value, any of them is accepted.
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s;
        int n;
        vector<char> v;
        cin >> n >> s;
        int fir, sec;
        if (s[0] == '0') {
            fir = 0;
        }
        else {
            fir = 1;
        }
        int temp = fir;
        for (int i = 0; i < n-1; i++) {
            if (s[i] == '0') {
                fir = 0;
            }
            else {
                fir = 1;
            }
            if (s[i+1] == '0') {
                sec = 0;
            }
            else {
                sec = 1;
            }

            if (temp >= sec) {
                v.push_back('-');
                temp = temp - sec;
            }
            else {
                v.push_back('+');
                temp = temp + sec;
            }
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << "\n";
    }
    return 0;
}

