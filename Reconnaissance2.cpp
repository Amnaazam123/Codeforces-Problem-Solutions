#include <iostream>
//problem link: https://codeforces.com/contest/34/problem/A

#include<vector> 
#include<algorithm>
using namespace std;
int main() {
    vector<int> v,v1;
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 0; i < n-1; i++) {
        v1.push_back(abs(v[i]-v[i+1]));
    }
    v1.push_back(abs(v[0] - v[n - 1]));
    sort(v1.begin(), v1.end());
    int min = v1[0];
    bool flag = false;
    for (int i = 0; i < n-1; i++) {
        if (abs(v[i] - v[i + 1]) == min) {
            cout << i + 1 << " " << i + 2 << "\n";
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << "1 " << n << "\n";
    }


    return 0;
}

