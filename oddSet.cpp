/*You are given a multiset (i. e. a set that can contain multiple equal integers) containing 2n integers. 
Determine if you can split it into exactly n pairs (i. e. each element should be in exactly one pair)
so that the sum of the two elements in each pair is odd (i. e. when divided by 2, the remainder is 1).*/

#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int t = 0; t<T; t++)
	{
		int n;
		cin >> n;
		n = 2 * n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != -1)
			{
				for (int j = 0; j < n; j++)
				{
					if (arr[j] != -1 && j!=i)
					{
						if ((arr[i] + arr[j]) % 2 == 1)
						{
							arr[i] = -1;
							arr[j] = -1;
							break;
						}
					}
					
				}
			}
			
		}
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != -1)
			{
				flag = 1;
			}
		}
		if (flag == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}



	return 0;
}
