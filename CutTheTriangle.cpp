//https://codeforces.com/contest/1767/problem/A

#include <iostream>
#include<vector> 
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        long long int sqr_a = pow((x2 - x1), 2) + pow((y2 - y1), 2);
        long long int sqr_b = pow((x1 - x3), 2) + pow((y1 - y3), 2);
        long long int sqr_c = pow((x2 - x3), 2) + pow((y2 - y3), 2);

        if (sqr_a == sqr_b + sqr_c || sqr_b == sqr_a + sqr_c || sqr_c == sqr_a + sqr_b) {
            if ((x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3))
                cout << "NO\n";
            else
                cout << "YES\n";
        }
           
        else
            cout << "YES\n";
    }

    return 0;
}

