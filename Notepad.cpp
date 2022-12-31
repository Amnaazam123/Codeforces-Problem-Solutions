/*
Problem statement: 
You want to type the string s, consisting of n lowercase Latin letters, using your favorite text editor Notepad#.
Notepad# supports two kinds of operations:
1 - append any letter to the end of the string;
2 - copy a continuous substring of an already typed string and paste this substring to the end of the string.
Can you type string s in strictly less than n operations?

Input
The first line contains a single integer t — the number of testcases.
The first line of each testcase contains a single integer n — the length of the string s.
The second line contains a string s, consisting of n lowercase Latin letters.
The sum of n doesn't exceed 2⋅105 over all testcases.

Output
For each testcase, print "YES" if you can type string s in strictly less than n operations. Otherwise, print "NO".

------------------------------------------------------YOU CAN FIND THIS PROBLEM ON THIS LINK :: https://codeforces.com/problemset/problem/1766/B
*/

#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n,flag=0;
        string s;
        map<char, set<char>> m;
        cin >> n >> s;
        if (n == 3) {
            cout << "NO\n";
        }
        else {
            m[s[0]].insert(s[1]);
            for (int i = 3; i < n; i++) {
                if (m[s[i - 1]].find(s[i]) != m[s[i-1]].end()) {
                    cout << "YES\n";
                    flag = 1;
                    break;
                }
                else {
                    m[s[i-2]].insert(s[i-1]);
                }
            }
            if (flag == 0) {
                cout << "NO\n";
            }
        }
        
    }
    return 0;
}
