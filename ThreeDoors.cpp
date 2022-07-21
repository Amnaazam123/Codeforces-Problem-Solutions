/*
problem statement:
There are three doors in front of you, numbered from 1 to 3 from left to right. Each door has a lock on it,
which can only be opened with a key with the same number on it as the number on the door.
There are three keys — one for each door. Two of them are hidden behind the doors, so that there is no more than one key behind each door. 
So two doors have one key behind them, one door doesn't have a key behind it. To obtain a key hidden behind a door, you should first unlock that door. 
The remaining key is in your hands.
Can you open all the doors?
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int doors[3] = { 1,2,3 };
		int handyKey;
		cin >> handyKey;
		int keys[3];
		cin >> keys[0] >> keys[1] >> keys[2];
		int keyBehindFirstDoor = keys[handyKey - 1];
		if (keyBehindFirstDoor != 0) {
			int keyBehindSecondDoor = keys[keyBehindFirstDoor - 1];
			if (keyBehindSecondDoor != 0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
