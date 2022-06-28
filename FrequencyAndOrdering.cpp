/*
Problem statement:
Find the frequency of "character in string" or "string in sentence." Also print it in Lexiographical order.
All this will be done by map.
*/

#include<iostream>
#include<map>
using namespace std;
int main() {
	string s;
	cin >> s;
	map<char, int> m;
	for (int i = 0; i < s.length(); i++) {
		m[s[i]]++;
	}
	for (auto& x : m) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
