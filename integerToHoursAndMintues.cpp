/*You are given an integer assuming that they are minutes, and your are to ouput HH:MM */

#include <iostream>
#include <string>
using namespace std;

string StringChallenge(int num) {
    string output = "";
    int hours = num / 60;
    int mints = num % 60;
    string hrs = to_string(hours);
    string mint = to_string(mints);
    output = hrs + ":" + mint;

    // code goes here  
    return output;

}

int main(void) {
    cout<<StringChallenge(126);
    // keep this function call here
    return 0;

}
