//problem statement link : https://codeforces.com/contest/1777/problem/A

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
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 == 1 && v[i + 1] % 2 == 1))
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}

