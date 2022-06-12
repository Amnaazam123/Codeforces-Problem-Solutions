/*You are given a string s consisting of the characters '0', '1', and '?'. You need to replace all the characters with '?' in the string s by '0' or '1' 
so that the string becomes a palindrome and has exactly a characters '0' and exactly b characters '1'. 
Note that each of the characters '?' is replaced independently from the others.
A string t of length n is called a palindrome if the equality t[i]=t[n−i+1] is true for all i (1≤i≤n).
For example, if s="01?????0", a=4 and b=4, then you can replace the characters '?' in the following ways:

"01011010";
"01100110".
For the given string s and the numbers a and b, replace all the characters with '?' in the string s by '0' or '1' 
so that the string becomes a palindrome and has exactly a characters '0' and exactly b characters '1'.

*/

#include<iostream>
using namespace std;
int countZeroesInSting(string str)
{
	int c0 = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '0')
			c0++;
	}
	return c0;
}
int countOnesInSting(string str)
{
	int c1 = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
			c1++;
	}
	return c1;
}
bool checkPalindrome(string str)
{
	if (str.length() == 1)
		return true;
	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != '?')
		{
			if (str[i] != str[str.length() - i - 1])
				return false;
		}
		else
			return false;
	}
	return true;
}
bool isQuestionMark(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '?')
			return true;
	}
	return false;
}
int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int a, b;
		string str;
		cin >> a >> b;
		cin >> str;
		if (str.length() == 1 && str[0] != '?')
		{
			if (countZeroesInSting(str) == a && countOnesInSting(str) == b)
				cout << str << endl;
			else
				cout << "-1\n";
			continue;
		}
		if (!isQuestionMark(str))                 //all constants
		{
			if (countZeroesInSting(str) == a && countOnesInSting(str) == b)
			{
				if (checkPalindrome(str))
					cout << str << "\n";
				else
					cout << "-1\n";
			}
			else
				cout << "-1\n";
			continue;
		}
		int size = str.length();
		for (int i = 0; i < size / 2; i++)
		{
			if (str[i] != '?' && str[size - i - 1] == '?')
				str[size - i - 1] = str[i];
			if (str[i] == '?' && str[size - i - 1] != '?')
				str[i] = str[size - i - 1];
		}
		a = a - countZeroesInSting(str);
		b = b - countOnesInSting(str);
		for (int i = 0; i < size; i++)
		{
			if (str[i] == '?')
			{
				if (a >= b && a >= 2)
				{
					str[i] = '0';
					str[size - i - 1] = '0';
					a -= 2;
				}
				else if (b > a && b >= 2)
				{
					str[i] = '1';
					str[size - i - 1] = '1';
					b -= 2;
				}
			}
		}
		if (size % 2 == 1)
		{
			if (a >= b && a > 0)
			{
				str[size / 2] = '0';
				a--;
			}
			if (a < b && b>0)
			{
				str[size / 2] = '1';
				b--;
			}
		}
		if (a == 0 && b == 0)
		{
			if (!isQuestionMark(str))
			{
				if (checkPalindrome(str))
					cout << str << "\n";
				else
					cout << "-1\n";
			}
			else
				cout << "-1\n";
		}
		else
			cout << "-1\n";
	}
 
	return 0;
}
