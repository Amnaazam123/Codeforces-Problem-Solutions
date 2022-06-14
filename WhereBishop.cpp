/*
Problem Statement:
Mihai has an 8×8 chessboard whose rows are numbered from 1 to 8 from top to bottom and whose columns are numbered from 1 to 8 from left to right.
Mihai has placed exactly one bishop on the chessboard. The bishop is not placed on the edges of the board. 
(In other words, the row and column of the bishop are between 2 and 7, inclusive.)
The bishop attacks in all directions diagonally, and there is no limit to the distance which the bishop can attack.
Note that the cell on which the bishop is placed is also considered attacked.*/

#include <iostream>
#include <string>
#include<vector>
#include <set>
using namespace std;
int main(void) {
    int T;
    cin >> T;
    while (T--) {
        char arr[8][8];

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> arr[i][j];
            }
        }
        bool found = false;
        for (int i = 1; i < 7; i++) {
            for (int j = 1; j < 7; j++) {
                if (arr[i][j] == '#') {
                    if (arr[i - 1][j - 1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#') {
                        cout << i + 1 << " " << j + 1 << "\n";
                        found = true;
                    }
               }
                if (found)
                    break;
            }
            if (found)
                break;
        }
    }
    // keep this function call here
    return 0;

}
