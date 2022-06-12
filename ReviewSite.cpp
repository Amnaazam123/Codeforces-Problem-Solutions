/*You are an upcoming movie director, and you have just released your first movie. You have also launched a simple review site with two buttons to press — upvote and downvote.

However, the site is not so simple on the inside. There are two servers, each with its separate counts for the upvotes and the downvotes.

n reviewers enter the site one by one. Each reviewer is one of the following types:

type 1: a reviewer has watched the movie, and they like it — they press the upvote button;
type 2: a reviewer has watched the movie, and they dislike it — they press the downvote button;
type 3: a reviewer hasn't watched the movie — they look at the current number of upvotes and downvotes of the movie on the server they are in and decide what button to press.
If there are more downvotes than upvotes, then a reviewer downvotes the movie. Otherwise, they upvote the movie.
Each reviewer votes on the movie exactly once.

Since you have two servers, you can actually manipulate the votes so that your movie gets as many upvotes as possible. When a reviewer enters a site, 
you know their type, and you can send them either to the first server or to the second one.

What is the maximum total number of upvotes you can gather over both servers if you decide which server to send each reviewer to?*/

#include<iostream>
#include<time.h>
#include<vector>
#include<ctime>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> v1;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int* r = new int[n];
		for (int i = 0; i < n; i++)
			cin >> r[i];
		int s1u = 0;
		int  s1d = 0, s2d = 0;
		for (int i = 0; i < n; i++)
		{
			if (r[i] == 1)
				s1u++;
			else if (r[i] == 2)
				s2d++;
			else
			{
				if (s1d <= s1u)
					s1u++;
				else 
					s1d++;
			}
		}
		v1.push_back(s1u);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
}
