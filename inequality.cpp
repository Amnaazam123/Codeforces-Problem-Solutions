/*
Problem statement:
You are given an array a1,a2,…an. Count the number of pairs of indices 1≤i,j≤n such that ai<i<aj<j.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		
		int n;
		cin >> n;
		vector<int> v(n);
		vector<int> v2;
		vector<int> v3;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (i + 1 > v[i])
			{
				v2.push_back(i + 1);
				v3.push_back(v[i]);
			}
		}
		int count = 0;
		for (int i = 0; i < v2.size(); i++) {
			for (int j = 0; j < v3.size(); j++) {
				if (v3[j] > v2[i]) {
					count++;
				}
			}
		}
		cout <<"c" << count << endl;

	
	}
	return 0;
}
