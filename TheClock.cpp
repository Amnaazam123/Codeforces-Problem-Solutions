/*
Problem statement:
Victor has a 24-hour clock that shows the time in the format "HH:MM" (00 ≤ HH ≤ 23, 00 ≤ MM ≤ 59). 
He looks at the clock every x minutes, and the clock is currently showing time s.
How many different palindromes will Victor see in total after looking at the clock every x minutes, the first time being at time s?
For example, if the clock starts out as 03:12 and Victor looks at the clock every 360 minutes (i.e. every 6 hours), then he will see the times 03:12, 09:12, 15:12, 21:12, 03:12,
and the times will continue to repeat. Here the time 21:12 is the only palindrome he will ever see, so the answer is 1.
A palindrome is a string that reads the same backward as forward. For example, the times 12:21, 05:50, 11:11 are palindromes but 13:13, 22:10, 02:22 are not.
*/

#include <iostream>
#include <string>
#include<vector>
#include <set>
using namespace std;
int main(void) {
    int T;
    cin >> T;
   
    while (T--) {
        string s;
        int minutes;
        cin >> s;
        cin >> minutes;
        int hrs = minutes / 60;
        int mints = minutes % 60;
        string H = to_string(s[0]-48) + to_string(s[1]-48);
        string M = to_string(s[3]-48) + to_string(s[4]-48);
        int HH = stoi(H);
        int MM = stoi(M);
        set<string> ss;
        string str = s;
        while (1) {
            if (ss.insert(s).second == false) {
                break;
            }
            else {

                HH = (HH + hrs);
                MM = (MM + mints);
                while (MM >= 60) {
                    HH = HH + 1;
                    MM = MM - 60;
                }
                HH = HH % 24;
                bool flag = false;

                string x, y;

                if (HH >= 0 && HH <= 9) {
                    x = "0" + to_string(HH);
                }
                else {
                    x = to_string(HH);
                }
                if (MM >= 0 && MM <= 9) {
                    y = "0" + to_string(MM);
                }
                else {
                    y = to_string(MM);
                }
                s = x + ":" + y;


            }
        }
        int count = 0;
        for (auto it = ss.begin(); it != ss.end(); ++it) {
            string a = *it;
            if (a[0] == a[4] && a[1] == a[3]) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
