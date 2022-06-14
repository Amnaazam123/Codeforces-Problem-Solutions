/*
Problem statement:
Let's define S(x) to be the sum of digits of number x written in decimal system. For example, S(5)=5, S(10)=1, S(322)=7.
We will call an integer x interesting if S(x+1)<S(x). In each test you will be given one integer n. 
Your task is to calculate the number of integers x such that 1≤x≤n and x is interesting.
*/

#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		long int n;
		cin >> n;
		if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8)
		{
			cout << "0\n";
			continue;
		}
		if(n == 9)
		{
			cout << "1\n";
			continue;
		}
		int m = n % 10;
		n = n / 10;
		if (m == 9)
			cout << n + 1 << endl;
		else
			cout << n << endl;
	}
	return 0;
}
