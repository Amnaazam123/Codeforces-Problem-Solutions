/*
You are given an expression of the form a+b, where a and b are integers from 0 to 9. You have to evaluate it and print the result.

Input
The first line contains one integer t (1≤t≤100) — the number of test cases.
Each test case consists of one line containing an expression of the form a+b (0≤a,b≤9, both a and b are integers). The integers are not separated from the + sign.

Output
For each test case, print one integer — the result of the expression.

Link: https://codeforces.com/problemset/problem/1772/A
*/

#include <iostream>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int a = s[0]-48;
        int b = s[2]-48;
        cout << a + b << "\n"; 
    }
    return 0;
}
