/*
Problem statement:
Find all the pairs of array whose sum also is in that array.
*/

#include<iostream>
#include<map>
using namespace std;
int main() {
	map<int, int> m;
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			m.insert(make_pair(arr[i], arr[j]));
		}
	}
	for (int j = 0; j < 9; j++) {
		for (auto &i:m) {
			if (i.first+i.second == arr[j]) {
				cout << i.first<<" + "<<i.second << " = " <<arr[j]<< "\n";
			}
		}

	}

	return 0;
}
