/*
Problem statement:
Anna has a row of N blocks, each with exactly one letter from A to Z written on it. The blocks are numbered 1,2,⋯,N from left to right.
Today, she is learning about palindromes. A palindrome is a string that is the same written forwards and backwards. 
For example, ANNA, RACECAR, AAA and X are all palindromes, while AB, FROG and YOYO are not.
Bob wants to test how well Anna understands palindromes, and will ask her Q questions. 
The i-th question is: can Anna form a palindrome using all of the blocks numbered from Li to Ri, inclusive? She may rearrange the blocks if necessary.
After each question, Anna puts the blocks back in their original positions.
Please help Anna by finding out how many of Bob's questions she can answer "yes" to.
*/

#include<iostream>
#include<map>
using namespace std;
#define ll long long
int main() {
    ll T, y = 1;
    cin >> T;
    while (T--) {
        ll n, q;
        ll count = 0;
        string s;
        bool flag = true;
        cin >> n >> q;
        cin >> s;
        for (ll i = 0; i < q; i++) {
            flag = true;
            ll l, r;
            cin >> l >> r;
            map<char, int> m;
            for (int i = l - 1; i <= r - 1; i++) {
                m[s[i]]++;
            }
            if (r == l) {
                count++;
            }
            else if ((r - l + 1)%2 == 0) {
                for (auto& x : m) {
                    if (x.second %2 == 1) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    count++;
                }
            }
            else {
                flag = true;
                bool xx = false;
                for (auto& x : m) {
                    if (x.second % 2 == 0) {
                        //Okayy
                    }
                    else if (flag == true) {
                        flag = false;
                        //Okayy
                    }
                    else {
                        xx = true;
                    }
                }
                if (xx == false)
                    count++;
            }
        }
        cout << "Case #" << y++ << ": " << count << endl;
    }
    return 0;
}

/*
palindrome

if(length == even)
    hr character ka count even ho
else
    kisi aik character ka count odd ho skta
*/
