/*
problem statement:
Timur has n candies. The i-th candy has a quantity of sugar equal to ai. So, by eating the i-th candy, Timur consumes a quantity of sugar equal to ai.
Timur will ask you q queries regarding his candies. For the j-th query you have to answer what is the minimum number of candies,
he needs to eat in order to reach a quantity of sugar greater than or equal to xj or print -1 if it's not possible to obtain such a quantity. 
In other words, you should print the minimum possible k such that after eating k candies,
Timur consumes a quantity of sugar of at least xjor say that no possible k exists.
Note that he can't eat the same candy twice and queries are independent of each other (Timur can use the same candy in different queries).

*/




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int noOfCandies, noOfQueries,candy,query;
		cin >> noOfCandies >> noOfQueries;
		vector<int> candies,queries;
		for (int i = 0; i < noOfCandies; i++) {
			cin >> candy;
			candies.push_back(candy);
		}
		sort(candies.begin(), candies.end());
		for (int i = 0; i < noOfQueries; i++) {
			cin >> query;
			queries.push_back(query);
		}
		int totalCandies, count;
		for (int i = 0; i < noOfQueries; i++) {
			totalCandies = 0, count=0;
			for (int j = noOfCandies - 1; j >= 0; j--) {
				totalCandies += candies[j];
				if (totalCandies >= queries[i]) {
					break;
				}
				else {
					count++;
				}
			}
			if (totalCandies < queries[i])
				cout << "-1\n";
			else
				cout << count + 1 << "\n";
		}
	}

	return 0;
}
