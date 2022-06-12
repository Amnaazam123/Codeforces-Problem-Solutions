/*A boy Bob likes to draw. Not long ago he bought a rectangular graph (checked) sheet with n rows and m columns.
Bob shaded some of the squares on the sheet. Having seen his masterpiece, he decided to share it with his elder brother, who lives in Flatland. 
Now Bob has to send his picture by post, but because of the world economic crisis and high oil prices, 
he wants to send his creation, but to spend as little money as possible.
For each sent square of paper (no matter whether it is shaded or not) Bob has to pay 3.14 burles. 
Please, help Bob cut out of his masterpiece a rectangle of the minimum cost, that will contain all the shaded squares. 
The rectangle's sides should be parallel to the sheet's sides.*/

#include<iostream>
using namespace std;
int main()
{
	int nr, mc;
	cin >> nr >> mc;
	char** arr = new char* [nr];
	for (int i = 0; i < nr; ++i)
		arr[i] = new char[mc];
	int check = 0;
	for (int i = 0; i < nr; i++)
	{
		for (int j = 0; j < mc; j++)
			cin >> arr[i][j];	
	}
	int up = -1;
	int down = -1;
	int right = -1;
	int left = -1;

	int flag = 0;
	//up side
	for (int i = 0; i < nr; i++)
	{
		for (int j = 0; j < mc; j++)
		{
			if (arr[i][j] == '*')
			{
				up = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	//down side
	flag = 0;
	for (int i = nr - 1; i >= 0; i--)
	{
		for (int j = 0; j < mc; j++)
		{
			if (arr[i][j] == '*')
			{
				down = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	//left side
	flag = 0;
	for (int i = 0; i < mc; i++)
	{
		for (int j = 0; j < nr; j++)
		{
			if (arr[j][i] == '*')
			{
				left = i;
				flag = 1;
				break;
			}

		}
		if (flag == 1)
			break;
	}

	//right side
	flag = 0;
	for (int i = mc-1; i >= 0; i--)
	{
		for (int j = 0; j < nr; j++)
		{
			if (arr[j][i] == '*')
			{
				right = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	for (int i = up; i <= down; i++)
	{
		for (int j = left; j <= right; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}
