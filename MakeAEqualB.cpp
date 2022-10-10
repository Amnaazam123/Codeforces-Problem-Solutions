/*
You are given two arrays a and b of n elements, each element is either 0 or 1.
You can make operations of 2 kinds.

Pick an index i and change ai to 1−ai.
Rearrange the array a however you want.

Find the minimum number of operations required to make a equal to b.

Input:
Each test contains multiple test cases. The first line contains a single integer t (1≤t≤400) — the number of test cases. Description of the test cases follows.
The first line of each test case contains a single integer n (1≤n≤100) — the length of the arrays a and b.
The second line of each test case contains n space-separated integers a1,a2,…,an (ai is 0 or 1), representing the array a.
The third line of each test case contains n space-separated integers b1,b2,…,bn (bi is 0 or 1), representing the array b.

Output
For each test case, print the minimum number of operations required to make a equal to b.
*/

#include<iostream>
#include<vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		vector<int> a,b;
		int s1;
		cin >> s1;
		int a0 =0, b0=0, a1=0, b1=0;
		int temp1;
		for (int i = 0; i < s1; i++) {
			cin >> temp1;
			if (temp1 == 0)
				a0++;
			else
				a1++;
			a.push_back(temp1);
		}
		for (int i = 0; i < s1; i++) {
			cin >> temp1;
			if (temp1 == 0)
				b0++;
			else
				b1++;
			b.push_back(temp1);
		}
		if (a0 == b0 && a1 == b1) {
			int rearrange = 0;
			for (int i = 0; i < s1; i++) {
				if (a[i] != b[i]) {
					rearrange = 1;
					break;
				}
			}
			if (rearrange) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else {
			int count = 0;
			for (int i = 0; i < s1; i++) {
				if (a[i] != b[i]) {
					count++;
				}
			}
			int min = abs(a1 - b1) + 1;
			if (min < count) {
				cout << min << endl;
			}
			else {
				cout << count << endl;
			}

		}



	}
	return 0;
}
