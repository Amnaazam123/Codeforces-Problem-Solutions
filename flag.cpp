/*According to a new ISO standard, a flag of every country should have a chequered field n × m, each square should be of one of 10 colours, and the flag should be «striped»:
each horizontal row of the flag should contain squares of the same colour, and the colours of adjacent horizontal rows should be different. 
Berland's government asked you to find out whether their flag meets the new ISO standard.*/

#include<iostream>
using namespace std;
int main()
{
	int row, col;
	cin >> row >> col;
	char** arr = new char* [row];
	for (int i = 0; i < row; i++)
		arr[i] = new char[col];
	int check = 0;
	int ele = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		ele = arr[i][0];
		check = 0;
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] != ele)
				check = 1;
		}
		if (check == 1)
			break;
	}
	if (check == 1)
	{
		cout << "NO\n";
		return 0;
	}
	int flag = 1;
	int p = 0;
	for (int i = 1; i < row; i++)
	{
		flag = 1;
		p = 1;
		for (int j = 0; j < col; j++)
		{
			if (arr[i - 1][j] != arr[i][j])
			{
				flag = 0;
			}
			p = 1;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1 && p == 1)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}








 
