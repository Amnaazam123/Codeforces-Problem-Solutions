/*
Problem statement:
At the store, the salespeople want to make all prices round.
In this problem, a number that is a power of 10 is called a round number. For example, the numbers 100=1, 101=10, 102=100 are round numbers, 
but 20, 110 and 256 are not round numbers.
So, if an item is worth m bourles (the value of the item is not greater than 109), 
the sellers want to change its value to the nearest round number that is not greater than m. 
They ask you: by how many bourles should you decrease the value of the item to make it worth exactly 10k bourles, 
where the value of k — is the maximum possible (k — any non-negative integer).
For example, let the item have a value of 178-bourles. Then the new price of the item will be 100, and the answer will be 178−100=78.

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
