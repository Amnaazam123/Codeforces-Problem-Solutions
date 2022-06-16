/*problem statement:
Define the score of some binary string T as the absolute difference between the number of zeroes and ones in it.
(for example, T= 010001 contains 4 zeroes and 2 ones, so the score of T is |4−2|=2).
Define the creepiness of some binary string S as the maximum score among all of its prefixes 
(for example, the creepiness of S= 01001 is equal to 2 because the score of the prefix S[1…4] is 2 and the rest of the prefixes have a score of 2 or less).
Given two integers a and b, construct a binary string consisting of a zeroes and b ones with the minimum possible creepiness.

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		string s="";
		int zeroes, ones;
		cin >> zeroes >> ones;
		while (zeroes > 0 && ones > 0) {
			s = s + "01";
			zeroes--;
			ones--;
		}
		while (zeroes > 0) {
			s = s + "0";
			zeroes--;
		}
		while (ones > 0) {
			s = s + "1";
			ones--;
		}
		cout << s << endl;
	}

	return 0;
}
