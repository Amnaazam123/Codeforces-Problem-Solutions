/*
Problem Statement:
Find all the elements that are absent in second array

*/

//------------BRUTE FORCE APPROACH
//arr1={1,2,3}
//arr2={3,4,5}

#include<iostream>
using namespace std;
int main() {
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 3,4,5 };
	bool found = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr1[i] == arr2[j])
				found = true;
		}
		if (!found) {
			cout << arr1[i];
		}
	}

	return 0;
}

//------------------------------------------------------------Good Approach
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {
	set<int> s;
	int arrA[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arrB[5] = { 2,4,6,8,10 };
	for (int i = 0; i < 5; i++) {
		s.insert(arrB[i]);
	}
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		if (s.insert(arrA[i]).second == true) {
			cout << arrA[i];

		}
	}
	return 0;
}
