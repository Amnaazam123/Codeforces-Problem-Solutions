/*Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. 
Bob observed that one number usually differs from the others in evenness. 
Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.*/

#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	if (arr[0] % 2 == 0 && arr[1] % 2 == 1 && arr[2] % 2 == 1)
	{
		cout << "1";
		return 0;
	}
	if (arr[0] % 2 == 1 && arr[1] % 2 == 0 && arr[2] % 2 == 0)
	{
		cout << "1";
		return 0;
	}
	if (arr[0] % 2 == 0)
	{
		for (int i = 1; i < n; i++)
		{
			if (arr[i] % 2 != 0)
			{
				cout<<i+1;
				break;
			}
		}
	}
	else  
	{
		for (int i = 1; i < n; i++)
		{

			if (arr[i] % 2 == 0)
			{
				cout << i + 1;
				break;
			}
		}
	}
	
	return 0;
}
