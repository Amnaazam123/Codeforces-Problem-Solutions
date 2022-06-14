/*
Problem statement:
Slavic has an array of length n consisting only of zeroes and ones. In one operation, he removes either the first or the last element of the array.
What is the minimum number of operations Slavic has to perform such that the total sum of the array is equal to s after performing all the operations?
In case the sum s can't be obtained after any amount of operations, you should output -1.
*/


#include <iostream>
#include<vector>
using namespace std;
int main(void) {
    int T;
    cin >> T;
   
    while (T--) {
		int n, k,input;
		cin >> n >> k;
		vector<int>v;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> input;
			v.push_back(input);
			sum += v[i];
		}
		if (sum < k) {
			cout << -1 << endl;
			continue;
		}

		int l = 0, tempSum = 0, startIndex = 0;
		for(int i=0;i<n;i++) {
      //increasing i untill you get extra 1 in your sum.
			tempSum += v[i];
			//terminate loop until your sum becomes K.
			while (temp > k) {
				tempSum = tempSum - v[startIndex];
				startIndex++;
			}
      //finding maximum gap/length between i and startIndex having sum k.
			l = max(l, i - startIndex + 1);
		}
		cout << n - l << endl;
    }
    
    return 0;
}
