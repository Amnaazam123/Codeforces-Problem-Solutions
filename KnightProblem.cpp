#include<iostream>
#include<queue>
using namespace std;
bool isValid(int x, int y, int n) {
	if (x >= 0 && x < n && y >= 0 && y < n)
		return true;
	return false;
}

int minStepsKnight(int x1, int y1, int x2, int y2, int n) {
  if(x1 == x2 && y1 == y2)
    return 0;
  
	int** knightBoard = new int*[n];
	for (int i = 0; i < n; i++)
		knightBoard[i] = new int[n];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			knightBoard[i][j] = 0;
		}
	}

	queue<pair<int, int>> q;
	q.push(make_pair(x1, y1));

  while (!q.empty()) {
		auto tempPair = q.front();
		int x = tempPair.first;
		int y = tempPair.second;
		q.pop();
		if (isValid(x + 1, y + 2, n) && knightBoard[x + 1][y + 2] == 0) {
			knightBoard[x + 1][y + 2] = knightBoard[x][y] + 1;
			q.push(make_pair(x + 1, y + 2));
		}
		if (isValid(x + 2, y + 1, n) && knightBoard[x + 2][y + 1] == 0) {
			knightBoard[x + 2][y + 1] = knightBoard[x][y] + 1;
			q.push(make_pair(x + 2, y + 1));
		}
		if (isValid(x + 2, y - 1, n) && knightBoard[x + 2][y - 1] == 0) {
			knightBoard[x + 2][y - 1] = knightBoard[x][y] + 1;
			q.push(make_pair(x + 2, y - 1));
		}
		if (isValid(x + 1, y - 2, n) && knightBoard[x + 1][y - 2] == 0) {
			knightBoard[x + 1][y - 2] = knightBoard[x][y] + 1;
			q.push(make_pair(x + 1, y - 2));
		}
		if (isValid(x - 1, y - 2, n) && knightBoard[x - 1][y - 2] == 0) {
			knightBoard[x - 1][y - 2] = knightBoard[x][y] + 1;
			q.push(make_pair(x - 1, y - 2));
		}
		if (isValid(x - 2, y - 1, n) && knightBoard[x - 2][y - 1] == 0) {
			knightBoard[x - 2][y - 1] = knightBoard[x][y] + 1;
			q.push(make_pair(x - 2, y - 1));
		}
		if (isValid(x - 2, y + 1, n) && knightBoard[x - 2][y + 1] == 0) {
			knightBoard[x - 2][y + 1] = knightBoard[x][y] + 1;
			q.push(make_pair(x - 2, y + 1));
		}
		if (isValid(x - 1, y + 2, n) && knightBoard[x - 1][y + 2] == 0) {
			knightBoard[x - 1][y + 2] = knightBoard[x][y] + 1;
			q.push(make_pair(x - 1, y + 2));
		}
	}
	return knightBoard[x2][y2];
}
int main() {
	cout << minStepsKnight(0, 0, 2, 2, 3);
	return 0;
}
