#include<iostream>
using namespace std;
int RomanToInt(string romanNum) {
	int a = 0;
	for (int i = 0; i < romanNum.length(); i++) {
		if (i+1<romanNum.length() && romanNum[i] == 'I' && romanNum[i + 1] == 'V') {
			a += 4;
			i++;
		}
		else if (i+1<romanNum.length() && romanNum[i] == 'I' && romanNum[i + 1] == 'X') {
			a += 9;
			i++;
		}
		else if (i+1<romanNum.length() && romanNum[i] == 'X' && romanNum[i + 1] == 'L')
		{
			a += 40;
			i++;
		}
		else if (i+1<romanNum.length() && romanNum[i] == 'X' && romanNum[i + 1] == 'C')
		{
			a += 90;
			i++;
		}
		else if (i+1<romanNum.length() && romanNum[i] == 'C' && romanNum[i + 1] == 'D')
		{
			a += 400;
			i++;
		}
		else if (i+1<romanNum.length() && romanNum[i] == 'C' && romanNum[i + 1] == 'M')
		{
			a += 900;
			i++;
		}
		else if (romanNum[i] == 'I')
			a += 1;
		else if (romanNum[i] == 'V')
			a += 5;
		else if (romanNum[i] == 'X')
			a += 10;
		else if (romanNum[i] == 'L')
			a += 50;
		else if (romanNum[i] == 'C')
			a += 100;
		else if (romanNum[i] == 'D')
			a += 500;
		else if (romanNum[i] == 'M')
			a += 1000;

			

	}
	return a;
}
string IntToRoman(int num) {
	string romans[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	int romanValues[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	string ans = "";
	for (int i = 0; i < 13; i++) {
		while (num >= romanValues[i]) {
			num = num - romanValues[i];
			ans += romans[i];
		}
	}
	return ans;
}
int main() {
	int num;
	cin >> num;
	cout<<IntToRoman(1994);
	return 0;
}
