/*
Problem Statement:
You are given n strings s1,s2,…,sn of length at most 8.
For each string si, determine if there exist two strings sj and sk such that si=sj+sk.
That is, si is the concatenation of sj and sk. Note that j can be equal to k.
Recall that the concatenation of strings s and t is s+t=s1s2…spt1t2…tq, where p and q are the lengths of strings s and t respectively.
For example, concatenation of "code" and "forces" is "codeforces".
*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int totalStrings;
		string input;
		cin >> totalStrings;

		vector<string> strings;
		for (int i = 0; i < totalStrings; i++) {
			cin >> input;
			strings.push_back(input);
		}

		vector<string> concatenatedStrs;
		for (int i = 0; i < totalStrings; i++) {
			for (int j = 0; j < totalStrings; j++) {
				concatenatedStrs.push_back(strings[i] + strings[j]);
			}
		}

		bool flag = false;
		for (int i = 0; i < totalStrings; i++) {
			flag = false;
			for (int j = 0; j < concatenatedStrs.size(); j++) {
				if (strings[i] == concatenatedStrs[j]) {
					cout << "1";
					flag = true;
					break;
				}
			}
			if (!flag)
				cout << "0";
		}
		cout << endl;

	}
	return 0;
}
