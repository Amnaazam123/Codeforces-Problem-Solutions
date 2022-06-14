/*Problem statement:
Sho has an array a consisting of n integers. An operation consists of choosing two distinct indices i and j and removing ai and aj from the array.
For example, for the array [2,3,4,2,5], Sho can choose to remove indices 1 and 3. After this operation, the array becomes [3,2,5]. 
Note that after any operation, the length of the array is reduced by two.
After he made some operations, Sho has an array that has only distinct elements. In addition, he made operations such that the resulting array is the longest possible.
More formally, the array after Sho has made his operations respects these criteria:
No pairs such that (i<j) and ai=aj exist.
The length of a is maximized.
Output the length of the final array.*/

#include <iostream>
#include <string>
#include<vector>
#include <set>
using namespace std;
int main(void) {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        set<int> s;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            s.insert(input);
        }
        if (n % 2 == 0)     //n is even
        {
            if ((s.size() % 2 == 0)) {
                cout << s.size() << endl;
            }
            else {
                cout << s.size() - 1 << endl;
            }

        }
        else {

            if ((s.size() % 2 == 1)) {
                cout << s.size() << endl;
            }
            else {
                cout << s.size() - 1 << endl;
            }
        }    
    }

    return 0;

}
