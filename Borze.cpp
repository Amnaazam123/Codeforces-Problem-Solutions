//https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include<vector> 
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            cout << "0";
        }
        else if (s[i] == '-' && i<s.length()-1) {
            if (s[i + 1] == '-')
                cout << "2";
            if (s[i + 1] == '.')
                cout << "1";
            i++;
        }
    }
    cout << "\n";
    return 0;
}




