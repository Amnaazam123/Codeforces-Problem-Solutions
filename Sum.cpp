//https://codeforces.com/contest/1742/problem/A

#include <iostream>
#include<vector> 
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int tmp;
        vector<int> v;
        for (int i = 1; i <= 3; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        if (v[2] == v[0] + v[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

