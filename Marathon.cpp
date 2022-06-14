/*
Problem statement:
You are given four distinct integers a, b, c, d.
Timur and three other people are running a marathon.
The value a is the distance that Timur has run and b, c, d correspond to the distances the other three participants ran.
Output the number of participants in front of Timur.*/

#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (b > a) {
            count++;
        }
        if (c > a) {
            count++;
        }
        if (d > a) {
            count++;
        }
        cout << count << endl;

    }
    return 0;

}
