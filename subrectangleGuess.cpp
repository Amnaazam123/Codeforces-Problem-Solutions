/*Michael and Joe are playing a game. The game is played on a grid with n rows and m columns, filled with distinct integers.
We denote the square on the i-th (1≤i≤n) row and j-th (1≤j≤m) column by (i,j) and the number there by aij.
Michael starts by saying two numbers h (1≤h≤n) and w (1≤w≤m). Then Joe picks any h×w subrectangle of the board (without Michael seeing).
Formally, an h×w subrectangle starts at some square (a,b) where 1≤a≤n−h+1 and 1≤b≤m−w+1. It contains all squares (i,j) for a≤i≤a+h−1 and b≤j≤b+w−1.
Possible move by Joe if Michael says 3×2 (with maximum of 15).
Finally, Michael has to guess the maximum number in the subrectangle. He wins if he gets it right.
Because Michael doesn't like big numbers, he wants the area of the chosen subrectangle (that is, h⋅w), to be as small as possible,
while still ensuring that he wins, not depending on Joe's choice.
Help Michael out by finding this minimum possible area.
It can be shown that Michael can always choose h,w for which he can ensure that he wins.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,m,x = 0,y = 0,temp=INT_MIN;
		cin >> n >> m;
		int** arr = new int* [n];
		for (int i = 0; i < n; i++)
			arr[i] = new int [m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
				if (arr[i][j] > temp) {
					temp = arr[i][j];
					x = i;
					y = j;
				}
			}
		}

		int r1, r2, c1, c2;
		r1 = x + 1;
		r2 = n - x;
		c1 = y + 1;
		c2 = m - y;
		int h = max(r1, r2);
		int w = max(c1, c2);
		cout << w * h << endl;
	}

	return 0;
}
