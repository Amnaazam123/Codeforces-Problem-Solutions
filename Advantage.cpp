// problem statement link: https://codeforces.com/contest/1760/problem/C
#include <iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,temp;
        cin >> n;
        vector<int> v1,v2;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            v1.push_back(temp);
            v2.push_back(temp);
        }
        sort(v2.begin(), v2.end());
        int max = v2[n - 1];
        int secMax = v2[n - 2];
        
        for (int i = 0; i < n; i++) {
            if (v1[i] == max)
                cout << v1[i] - secMax << " ";
            else
                cout << v1[i] - max << " ";
        }
        cout << "\n";
    }

    return 0;
}

