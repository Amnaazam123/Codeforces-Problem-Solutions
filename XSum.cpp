/*
Problem statement:
Timur's grandfather gifted him a chessboard to practice his chess skills.
This chessboard is a grid a with n rows and m columns with each cell having a non-negative integer written on it.
Timur's challenge is to place a bishop on the board such that the sum of all cells attacked by the bishop is maximal.
The bishop attacks in all directions diagonally, and there is no limit to the distance which the bishop can attack.
Note that the cell on which the bishop is placed is also considered attacked. Help him find the maximal sum he can get.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		int** arr = new int*[n];
		for (int i = 0; i < n; i++)
			arr[i] = new int[m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
		vector<int> v;
		int sum1=0, sum2=0, sum3=0, sum4=0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
				int ii = i - 1, jj = j - 1;
				while (ii>=0 && jj>=0) {
					sum1 += arr[ii][jj];
					ii--;
					jj--;
				}
				ii = i - 1, jj = j + 1;
				while (ii >= 0 && jj < m) {
					sum2 += arr[ii][jj];
					ii--;
					jj++;
				}
				ii = i + 1, jj = j - 1;
				while (ii < n && jj >= 0) {
					sum3 += arr[ii][jj];
					ii++;
					jj--;
				}
				ii = i + 1, jj = j + 1;
				while (ii < n && jj < m) {
					sum4 += arr[ii][jj];
					ii++;
					jj++;
				}
				v.push_back(sum1 + sum2 + sum3 + sum4 + arr[i][j]);

			}
		}
		int z = INT_MIN;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > z) {
				z = v[i];
			}
			
		}
		cout << z << endl;
	}

	return 0;
}
