/*Email address in Berland is a string of the form A@B, where A and B are arbitrary strings consisting of small Latin letters.
Bob is a system administrator in «Bersoft» company. He keeps a list of email addresses of the company's staff. This list is as a large string,
where all addresses are written in arbitrary order, separated by commas. The same address can be written more than once.
Suddenly, because of unknown reasons, all commas in Bob's list disappeared. Now Bob has a string, where all addresses are written one after another without any separators,
and there is impossible to determine, where the boundaries between addresses are. 
Unfortunately, on the same day his chief asked him to bring the initial list of addresses. Now Bob wants to disjoin addresses in some valid way. Help him to do that.*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int check = 0;
	vector<char> v;
	string s;
	cin >> s;
	if (s[0] == '@')
	{
		cout << "No solution";
		return 0;
	}
	if (s[s.length() - 1] == '@')
	{
		cout << "No solution";
		return 0;
	}
	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] == '@' && s[i + 1] == '@')
		{
			cout << "No solution";
			return 0;
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		check = 0;
		if (s[i] == '@')
		{
			cout << "No solution\n";
			return 0;
		}
		while (s[i] != '@' && i < s.length())
		{
			v.push_back(s[i]);
			i++;
		}
		if (i == s.length())
		{
			cout << "No solution\n";
			return 0;
		}
		if (s[i] == '@')
		{
			v.push_back(s[i]);
			v.push_back(s[i + 1]);
			i++;
		}
		for (int j = i; j < s.length(); j++)
		{
			if (s[j] == '@')
				check = 1;
		}
		if (check == 1)
		{
			v.push_back(',');
			continue;
		}
		if (check == 0)
		{
			i++;
			while (i < s.length())
			{
				v.push_back(s[i]);
				i++;
			}
			v.push_back(',');
			break;
		}
		
	}
	int size = 0;
		size = v.size() - 1;
	for (int i = 0; i < size; i++)
		cout << v[i];
	return 0;
}
