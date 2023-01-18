// problem statement link: https://codeforces.com/contest/1759/problem/A

#include <iostream>
#include<vector> 
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.length();
        string longS = "";
        for (int i = 1; i <= n; i++) {
            longS += "Yes";
        }
        int num = longS.find(s);
        if (num == -1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

