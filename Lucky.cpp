/*
problem Statement:
A ticket is a string consisting of six digits.
A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits.
Given a ticket, output if it is lucky or not.
Note that a ticket can have leading zeroes.
*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int firstSum = 0,lastSum=0;
		firstSum = s[0] + s[1] + s[2];
		lastSum = s[3] + s[4] + s[5];
		if (firstSum == lastSum)
			cout << "YES\n";
		else
			cout << "NO\n";

		

		
	}

	return 0;
}
