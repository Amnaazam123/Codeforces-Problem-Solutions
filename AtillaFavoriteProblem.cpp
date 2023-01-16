//Problem link: https://codeforces.com/contest/1760/problem/B

#include <iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        vector<char> v;
        for (int i = 0; i < n; i++) {
            v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        int lastChar = v[n - 1] - 96;
        cout << lastChar << "\n";
    }

    return 0;
}

