// https://codeforces.com/contest/1790/problem/A

#include <iostream>
#include<vector> 
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    string s = "314159265358979323846264338327";
    while (T--) {
        string ss;
        cin >> ss;
        int count = 0;
        bool flag = false;
        for (int i = 0; i < ss.length(); i++) {
            if (s[i] == ss[i] && flag==false)
                count++;
            else
                flag = true;
        }
        cout << count << "\n";
    }
    return 0;
}




