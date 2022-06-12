/*There is a square field of size n×n in which two cells are marked. These cells can be in the same row or column.
You are to mark two more cells so that they are the corners of a rectangle with sides parallel to the coordinate axes.
For example, if n=4 and a rectangular field looks like this (there are asterisks in the marked cells):
..∗.
....
∗...
....
Then you can mark two more cells as follows
∗.∗.
....
∗.∗.
....
If there are several possible solutions, then print any of them.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	int sizeOfMatrix = 0;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> sizeOfMatrix;
		char** a = new char* [sizeOfMatrix];
		for (int i = 0; i < sizeOfMatrix; i++)
			a[i] = new char[sizeOfMatrix];
		vector<int> v;
		for (int r = 0; r < sizeOfMatrix; r++)
		{
			for (int c = 0; c < sizeOfMatrix; c++)
			{
				cin >> a[r][c];
				if (a[r][c] == '*')
				{
					v.push_back(r);
					v.push_back(c);
				}
			}
		}
		if (v[1] == v[3])        //same coloumn
		{
			if (v[1] != 0)
			{
				a[v[0]][0] = '*';
				a[v[2]][0] = '*';
			}
			else
			{
				a[v[0]][1] = '*';
				a[v[2]][1] = '*';
			}
		}
		if (v[0] == v[2])          //same row
		{
			if (v[0] != 0)
			{
				a[0][v[1]] = '*';
				a[0][v[3]] = '*';
			}
			else
			{
				a[1][v[1]] = '*';
				a[1][v[3]] = '*';
			}
		}
		else
		{
			a[v[0]][v[3]] = '*';
			a[v[2]][v[1]] = '*';
		}
		for (int r = 0; r < sizeOfMatrix; r++)
		{
			for (int c = 0; c < sizeOfMatrix; c++)
			{
				cout << a[r][c];
			}
			cout << "\n";
		}
		for (int i = 0; i < sizeOfMatrix; ++i) {
			delete[] a[i];
		}
		delete[] a;
	}
	return 0;
}
