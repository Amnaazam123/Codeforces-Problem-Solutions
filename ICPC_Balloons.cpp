/*
Problem statement:
In an ICPC contest, balloons are distributed as follows:
Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled A, B, C, ..., Z. You are given the order of solved problems in the contest, denoted as a string s, 
where the i-th character indicates that the problem si has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams recieved. Note that some problems may be solved by none of the teams.
*/

#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		set<char> mySet;
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			if (!mySet.insert(s[i]).second) {
				count += 1;
			}
			else
			{
				mySet.insert(s[i]);
				count += 2;
			}
				
		}
		cout << count << endl;
		
	}
	return 0;
}
