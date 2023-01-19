//Problem statement link : https://codeforces.com/contest/1759/problem/B

#include <iostream>
#include<vector> 
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<int> v, pv;
        int m, s;
        cin >> m >> s;
        int tmp = 0;
        for (int i = 1; i <= m; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        bool alreadyThere = false;
        int lastElement = v[m - 1];
        for (int i = 1; i < lastElement; i++) {
            alreadyThere = false;
            for (int j = 0; j < m; j++) {
                if (i == v[j]) {
                    alreadyThere = true;
                }
            }
            if (!alreadyThere) {
                pv.push_back(i);
            }
        }
        bool repeated = false;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (i != j && v[i]==v[j]) {
                    repeated = true;
                }
            }
        }
        if (repeated) {
            cout << "NO\n";
            continue;
        }
        else {
            int sumOfRest = 0;
            for (int i = 0; i < pv.size(); i++)
                sumOfRest += pv[i];
            int remSum = s - sumOfRest;
            if (remSum == 0)
                cout << "YES\n";
            else if (remSum >= 0) {
                int a = 0;
                lastElement = lastElement + 1;
                while (a < remSum) {
                    a = a + lastElement;
                    lastElement = lastElement + 1;
                }
                if (a == remSum)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }   
    }
    return 0;
}

