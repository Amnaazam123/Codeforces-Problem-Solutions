//https://codeforces.com/contest/16/problem/A

#include<iostream>
#include<set>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];
	char tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			arr[i][j] = tmp - 48;
		}
	}
	bool cond1 = true, cond2 = true;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if(arr[i][0]!=arr[i][j])
				cond1 = false;
		}
	}
	if (cond1) {
		for (int i = 0; i < n-1; i++) {
			if (arr[i][0] - arr[i + 1][0] == 0)
				cond2 = false;
		}
		if (cond2 == false)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}


	return 0;
}
