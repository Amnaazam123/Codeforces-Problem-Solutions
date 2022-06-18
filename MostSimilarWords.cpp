/*
Problem statement:
You are given n words of equal length m, consisting of lowercase Latin alphabet letters. The i-th word is denoted si.
In one move you can choose any position in any single word and change the letter at that position to the previous or next letter in alphabetical order. For example:
- you can change 'e' to 'd' or to 'f';
- 'a' can only be changed to 'b';
- 'z' can only be changed to 'y'.
The difference between two words is the minimum number of moves required to make them equal. For example, the difference between "best" and "cost" is 1+10+0+0=11.
Find the minimum difference of si and sj such that (i<j). In other words, find the minimum difference over all possible pairs of the n words.
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int words, length;
		cin >> words >> length;
		string s;
		vector<string> v,v1;
		for (int i = 0; i < words; i++) {
			cin >> s;
			v.push_back(s);
		}
		for (int i = 0; i < words; i++) {
			for (int j = i + 1; j < words; j++) {
				string pair = v[i] + v[j];
				v1.push_back(pair);
			}
		}
		vector<int> count;
		for (int i = 0; i < v1.size(); i++) {
			int x, y, count1 = 0;
			x = 0;
			y = length;
			while( x < length && y < length*2) {
				count1 = count1 + abs(v1[i][x] - v1[i][y]);
				x++;
				y++;
			}
			count.push_back(count1);
		}
		int z = INT_MAX;
		for (int i = 0; i < count.size(); i++) {
			if (z > count[i]) {
				z = count[i];
			}
		}
		cout << z << endl;
	}

	return 0;
}
