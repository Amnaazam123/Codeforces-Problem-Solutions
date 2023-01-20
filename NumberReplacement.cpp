// problem statement link : https://codeforces.com/contest/1744/problem/A

#include <iostream>
#include<vector> 
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,tmp;
        cin >> n;
        vector<int> v;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && v[i] == v[j]) {
                    if (s[i] != s[j]) {
                        flag = true;
                    }
                }
            }
        }
        if (flag == true)
            cout << "NO\n";
        else
            cout << "YES\n";   
    }
    return 0;
}

