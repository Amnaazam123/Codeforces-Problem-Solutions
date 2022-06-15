/*Problem Statement:
You have a stripe of checkered paper of length n. Each cell is either white or black.
What is the minimum number of cells that must be recolored from white to black in order to have a segment of k consecutive black cells on the stripe?
If the input data is such that a segment of k consecutive black cells already exists, then print 0.
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		string s;
		cin >> n >> k >> s;

		//vector to store the count of W cells till index i.
		vector<int> prefixSumArr(n+1);
		prefixSumArr[0] = 0;
		for (int i = 0; i < n; i++) {
			prefixSumArr[i + 1] = prefixSumArr[i];
			if (s[i] == 'W') {
				prefixSumArr[i + 1]++;
			}
			
		}

		//getting the min number of white cells in window sized k
		int tmp = n;
		for (int i = 0; i <= n - k; i++) {
			tmp = min(tmp, prefixSumArr[i + k] - prefixSumArr[i]);
		}
		cout << tmp << endl;
		

		
	}

	return 0;
}
