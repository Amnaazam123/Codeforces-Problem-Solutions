/*Phone number in Berland is a sequence of n digits. Often, to make it easier to memorize the number, it is divided into groups of two or three digits.
For example, the phone number 1198733 is easier to remember as 11-987-33. 
Your task is to find for a given phone number any of its divisions into groups of two or three digits.*/

#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin >> n;
	char* arr = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (n % 2 == 0)
	{
		for (int i = 0; i < n-2; i+=2)
		{
			cout << arr[i] << arr[i + 1]<<"-";
		}
		cout << arr[n - 2] << arr[n - 1];
	}
	else
	{
		for (int i = 0; i < n-3; i += 2)
		{
			cout << arr[i] << arr[i + 1] << "-";
		}
		cout << arr[n - 3] << arr[n - 2] << arr[n - 1];
	}
	return 0;
}
