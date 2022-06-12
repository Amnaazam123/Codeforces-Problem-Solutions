/*Polycarp has 26 tasks. Each task is designated by a capital letter of the Latin alphabet.
The teacher asked Polycarp to solve tasks in the following way: if Polycarp began to solve some task, 
then he must solve it to the end, without being distracted by another task. After switching to another task, Polycarp cannot return to the previous task.
Polycarp can only solve one task during the day. Every day he wrote down what task he solved. Now the teacher wants to know if Polycarp followed his advice.
For example, if Polycarp solved tasks in the following order: "DDBBCCCBBEZ", then the teacher will see that on the third day Polycarp began to solve the task 'B', 
then on the fifth day he got distracted and began to solve the task 'C', on the eighth day Polycarp returned to the task 'B'. Other examples of when the teacher is suspicious: "BAB", "AABBCCDDEEBZZ" and "AAAAZAAAAA".
If Polycarp solved the tasks as follows: "FFGZZZY", then the teacher cannot have any suspicions. Please note that Polycarp is not obligated to solve all tasks.
Other examples of when the teacher doesn't have any suspicious: "BA", "AFFFCC" and "YYYYY".
Help Polycarp find out if his teacher might be suspicious.*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T,n;
	string s;
	cin >> T;
	int flag = 1;
	for (int t = 0; t < T; t++)
	{
		flag = 1;
		cin >> n >> s;
		vector<int> v(26,0);
		v[s[0] - 'A'] = 1;
		for (int i = 1; i < n; i++)
		{
			if (s[i] == s[i - 1])continue;
			if (v[s[i] - 'A'] > 0)
			{
				cout << "NO\n";
				flag = 0;
				break;
			}
			v[s[i]-'A'] = 1;
		}
		if (flag == 1)
			cout << "YES\n";
	}
	return 0;
}
