/*You are given a number n and an array b1,b2,…,bn+2, obtained according to the following algorithm:

some array a1,a2,…,an was guessed;
array a was written to array b, i.e. bi=ai (1≤i≤n);
The (n+1)-th element of the array b is the sum of the numbers in the array a, i.e. bn+1=a1+a2+…+an;
The (n+2)-th element of the array b was written some number x (1≤x≤109), i.e. bn+2=x; The
array b was shuffled.
For example, the array b=[2,3,7,12,2] it could be obtained in the following ways:

a=[2,2,3] and x=12;
a=[3,2,7] and x=2.
For the given array b, find any array a that could have been guessed initially.*/

#include<iostream>
#include<random>
#include<algorithm>
#include<vector>
using namespace std;
void shuffle_(long long int array[],long int n,long int x,long int y)
{
	long int storex = array[x];
	long int stores = array[y];
	unsigned seed = 0;
	random_shuffle(array, array + n + 2);
	int check = 0;
	int check1 = 0;
	// Printing our array
	for (int i = 0; i < n + 2; i++)
	{
		if (array[i] == storex && check == 0)
		{
			check = 1;
			continue;
		}
		else if (array[i] == stores && check1 == 0)
			{
				check1 = 1;
				continue;
			}
		else
			cout << array[i] << "  ";
	}
	cout << "\n";
}
int findingX(long long int array[],long int n,int LorSL)
{
	long long int sum = 0;
	for (int k = 0; k < n + 2; k++)
	{
		if(k!=LorSL)
			sum += array[k];
	}
	long long int large = array[LorSL];
	for (int i = 0; i < n + 2; i++)
	{
		if(i!=LorSL)
		{if (sum - array[i] == large)
				return i;}
	}
	return -1;
}
int main()
{
	int T;
	cin >> T;
	long long int* array;
	long int n;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		array = new long long int[n + 2];
		for (int i = 0; i < n + 2; i++)
			cin >> array[i];
		sort(array,array + n + 2);
		long int y = n + 1;
		long int x = findingX(array, n , y);
		if (x == -1)
		{
			x = findingX(array, n, n);
			y = n;
		}
		if (x == -1)
			cout << "-1\n";
		else
			shuffle_(array, n,x,y);
		delete[]array;
	}
	return 0;
}
