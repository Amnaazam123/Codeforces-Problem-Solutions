//https://codeforces.com/contest/1780/problem/A

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
        int n,tmp;
        cin >> n;
        vector<int> evenIdx,oddIdx;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp % 2 == 0) {
                evenIdx.push_back(i);
            }
            else {
                oddIdx.push_back(i);
            }
        }


            if (evenIdx.size() >= 2 && oddIdx.size() >=1)
            {
                cout << "YES\n";
                cout << evenIdx[0] + 1 << " " << evenIdx[1] + 1<< " " << oddIdx[0] + 1 << "\n";
            }
            else if(oddIdx.size()>=3) {
                cout << "YES\n";
                cout << oddIdx[0] + 1<< " " << oddIdx[1] + 1 << " " << oddIdx[2] + 1<< "\n";
            }
            else
                cout << "NO\n";
        }
    return 0;
       
    }




