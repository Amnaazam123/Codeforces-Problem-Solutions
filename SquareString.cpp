/*
Problem statement:
A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. 
But the strings "aaa", "abaaab" and "abcdabc" are not square.
For a given string s determine if it is square.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		if (s.length() % 2 == 1) {
			cout << "NO\n";
		}
		else {
			int len = s.length();
			int x = 0, y = 0;
			x = 0;
			y = len / 2;
			bool flag = false;
			while (x < (len / 2) && y < len) {
				if (s[x] != s[y]) {
					flag = true;
				}
				x++;
				y++;
			}
			if (flag)
				cout << "NO\n";
			else {
				cout << "YES\n";
			}
				

		}
	}

	return 0;
}
