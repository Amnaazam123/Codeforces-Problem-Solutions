/*
problem statement:
There are n boxes with different quantities of candies in each of them. The i-th box has ai candies inside.
You also have n friends that you want to give the candies to, so you decided to give each friend a box of candies. 
But, you don't want any friends to get upset so you decided to eat some (possibly none) candies from each box 
so that all boxes have the same quantity of candies in them. Note that you may eat a different number of candies from different boxes 
and you cannot add candies to any of the boxes.
What's the minimum total number of candies you have to eat to satisfy the requirements?

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, minCandy = INT_MAX,sum=0;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (minCandy > v[i])
				minCandy = v[i];
			sum += v[i];
		}
		int assignedCandies = minCandy * n;
		cout << sum - assignedCandies << endl;
		
	}

	return 0;
}
