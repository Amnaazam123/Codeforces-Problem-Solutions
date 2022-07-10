/*
Problem statement:
Polycarp has a poor memory. Each day he can remember no more than 3 of different letters.
Polycarp wants to write a non-empty string of s consisting of lowercase Latin letters, taking minimum number of days. In how many days will he be able to do it?
Polycarp initially has an empty string and can only add characters to the end of that string.

For example, if Polycarp wants to write the string lollipops, he will do it in 2 days:
- on the first day Polycarp will memorize the letters l, o, i and write lolli;
- On the second day Polycarp will remember the letters p, o, s, add pops to the resulting line and get the line lollipops.

If Polycarp wants to write the string stringology, he will do it in 4 days:
- on the first day will be written part str;
- on day two will be written part ing;
- on the third day, part of olog will be written;
- on the fourth day, part of y will be written.
For a given string s, print the minimum number of days it will take Polycarp to write it.
*/
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		set<char> s;
		int days = 0;
		for (int i = 0; i < str.length(); i++) {
			s.insert(str[i]);
			if (s.size() == 4) {
				s.clear();
				days++;
				i--;
			}
		}
		if (s.size() != 0) {
			cout << days + 1 <<endl;
		}
		else
			cout << days << endl;
 
	}
	return 0;
}
