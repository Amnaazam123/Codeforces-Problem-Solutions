/*
Problem statement:
Polycarp likes squares and cubes of positive integers. Here is the beginning of the sequence of numbers he likes: 1, 4, 8, 9, ....
For a given number n, count the number of integers from 1 to n that Polycarp likes.
In other words, find the number of such x that x is a square of a positive integer number or a cube of a positive integer number 
(or both a square and a cube simultaneously).
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int T,n;
	cin >> T;
	while (T--) {
		cin >> n;
		set<int> a;
		for (int i = 1; i*i*i <= n; i++)
			a.insert(i * i * i);
		for (int i = 1; i*i <= n; i++)
			a.insert(i * i);
		cout << a.size() << endl;
	}

	return 0;
}



