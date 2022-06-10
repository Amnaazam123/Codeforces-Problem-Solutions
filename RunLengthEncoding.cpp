/*------------------------------------------------------------------------------------------------------------------------------------------------

	Problem statement:
	You have to show the count of each character in string and append that count with that character in same string, you will get output string.
	After that your are provided with one token string which will be appended with output and then replace each third character of output string
	with "X"  to get final output.

	----EXAMPLE:
	input=aaamnna
	output=3a1m2n1a
	output=3a1m2n1aTokenStr
	finalOutput=3aXm2X1aXokXnSXr

---------------------------------------------------------------------------------------------------------------------------------------------------*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;
string fun(string str) {
	vector<string> v;
	for (int i = 0; i < str.length(); i++) {
		int count = 1;

		//getting count of consecutive same characters
		while (str[i] == str[i + 1] && i < str.length() - 1) {
			count++;
			i++;
		}

		//converting character to string
		string s;
		s.push_back(str[i]);

		//appending character with its count
		s = to_string(count) + s;

		//storing result in vector
		v.push_back(s);

	}
	//coverting vector result to string
	string output = "";
	for (int i = 0; i < v.size(); i++) {
		output = output + v[i];
	}
	string finalOutput = "";
	//appending with token
	output = output + "k78zb6yca0";

	//Replace each third character of output string with "X"
	for (int i = 0; i < output.length(); i++) {
		if ((i+1) % 3 == 0 && i!=0) {
			finalOutput = finalOutput + "X";
		}
		else {
			finalOutput = finalOutput + output[i];
		}
		
	}

	return finalOutput;
}
int main() {

	string input;
	cout << "input:";
	cin >> input;
	cout << fun(input);
	return 0;
}
