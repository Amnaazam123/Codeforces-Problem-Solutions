/*
Problem statement:
Luca has a cypher made up of a sequence of n wheels, each with a digit ai written on it. On the i-th wheel, he made bi moves. Each move is one of two types:
up move (denoted by U): it increases the i-th digit by 1. After applying the up move on 9, it becomes 0.
down move (denoted by D): it decreases the i-th digit by 1. After applying the down move on 0, it becomes 9.
Luca knows the final sequence of wheels and the moves for each wheel. Help him find the original sequence and crack the cypher.

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int noOfWheels,input;
		cin >> noOfWheels;
		vector<int> curDigit;
		for (int i = 0; i < noOfWheels; i++) {
			cin >> input;
			curDigit.push_back(input);
		}
		for (int i = 0; i < noOfWheels; i++) {
			int totalMoves;
			cin >> totalMoves;
			string howMoves;
			cin >> howMoves;
			int curWheelValue = curDigit[i];
			for (int j = 0; j < howMoves.length(); j++) {
				if (howMoves[j] == 'U') {
					curWheelValue -= 1;
				}
				else if (howMoves[j] == 'D') {
					curWheelValue += 1;
				}
				if (curWheelValue == 10)
					curWheelValue = 0;
				else if (curWheelValue == -1)
					curWheelValue = 9;
				
			}
			cout << curWheelValue << " ";
		}
		cout << endl;

		
	}
	return 0;
}
