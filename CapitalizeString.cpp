/*
Problem statement:
Make first character of each word of string uppercase.
*/


#include <iostream>
#include <string>
using namespace std;

string StringChallenge(string str) {

    for (int i = 0; i < str.length(); i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
        }
    } 
    return str;

}

int main(void) {
    cout<<StringChallenge("hello i am amna");
    return 0;

}
