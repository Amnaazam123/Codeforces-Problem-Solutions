/*
Problem Statement:
Take string as an argunment in function and return that string
in alphabetical order(characters of string should be in alphabetical order).

Example:
input:amnaazam
output:aaaammnz

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string fun(string str) {
	vector<char> v;
	for (int i = 0; i < str.length(); i++) {
		v.push_back(str[i]);
	}
	sort(v.begin(), v.end());
	string output="";
	for (int i = 0; i < v.size(); i++) {
		output = output + v[i];
	}
	return output;

	
}
int main() {

	string input;
	cout << "input:";
	cin >> input;
	cout << fun(input);
	return 0;
}
