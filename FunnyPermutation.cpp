/*
Problem statement:
A sequence of n numbers is called permutation if it contains all numbers from 1 to n exactly once. For example, the sequences [3,1,4,2], [1] and [2,1] are permutations, but [1,2,1], [0,1] and [1,3,4] are not.

For a given number n you need to make a permutation p such that two requirements are satisfied at the same time:

For each element pi, at least one of its neighbors has a value that differs from the value of pi by one. That is, for each element pi (1≤i≤n), at least one of its neighboring elements (standing to the left or right of pi) must be pi+1, or pi−1.
the permutation must have no fixed points. That is, for every i (1≤i≤n), pi≠i must be satisfied.
Let's call the permutation that satisfies these requirements funny.

For example, let n=4. Then [4,3,1,2] is a funny permutation, since:

to the right of p1=4 is p2=p1−1=4−1=3;
to the left of p2=3 is p1=p2+1=3+1=4;
to the right of p3=1 is p4=p3+1=1+1=2;
to the left of p4=2 is p3=p4−1=2−1=1.
for all i is pi≠i.
For a given positive integer n, output any funny permutation of length n, or output -1 if funny permutation of length n does not exist.

Input
The first line of input data contains a single integer t (1≤t≤104) — the number of test cases.

The description of the test cases follows.

Each test case consists of f single line containing one integer n (2≤n≤2⋅105).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print on a separate line:

any funny permutation p of length n;
or the number -1 if the permutation you are looking for does not exist.

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int nums;
		bool found = false;
		cin >> nums;
		string s = "";
		for (int i = 1; i <= nums; i++) {
			s = s + (to_string(i));
		}

		//2 conditions
		while (next_permutation(s.begin(), s.end())) {
			int flag = 0;
			for (int i = 1; i < nums - 1; i++) {
				if ((int(s[i - 1]) == int(s[i]) + 1) ||
					(int(s[i + 1]) == int(s[i]) - 1) ||
					(int(s[i - 1]) == int(s[i]) - 1) ||
					(int(s[i + 1]) == int(s[i]) + 1))
				{
					
				}
				else {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				if (int(s[0]) == int(s[1]) + 1 || int(s[0]) == int(s[1]) - 1) {
					if (int(s[nums - 1]) == int(s[nums - 2]) + 1 || int(s[nums - 1]) == int(s[nums - 2]) - 1) {
						flag = 0;
					}
					else {
						flag = 1;
					}
				}
				else {
					flag = 1;
				}
			}

			//1st condition satisfied
			if (flag == 0) {
				int flag2 = 0;
				for (int i = 0; i < nums; i++) {
					if (i + 1 == int(s[i]) - 48) {
						flag2 = 1;
					}
				}
				//2nd condition satisfied
				if (flag2 == 0) {
					found = true;
					for (int i = 0; i < nums; i++) {
						cout << s[i] << " ";
					}
					break;
				}
			}
			else {
				if (!found)
					continue;
				else
					break;
			}
		}
		if (!found) {
			cout << "-1";
		}
		cout << "\n";
		
		
	}
	return 0;
}




