/*Professor Vasechkin is studying evolution of worms. 
Recently he put forward hypotheses that all worms evolve by division.
There are n forms of worms. Worms of these forms have lengths a1, a2, ..., an.
To prove his theory, professor needs to find 3 different forms that the length of the first form is equal to sum of lengths of the other two forms.
Help him to do this.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		int ele = arr[i];
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				for (int k = 0; k < n; k++)
				{
					if (k != i && k != j)
					{
						if (ele + arr[j] == arr[k])
						{
							cout << k + 1 << " " << i + 1 << " " << j + 1<< endl;
							return 0;
						}
					}
				}
				
			}
		}
	}
	cout << "-1";

	return 0;
}
