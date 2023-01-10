/*
This is an easy version of the problem. The difference between the versions is that the string can be longer than in the easy version. 
You can only do hacks if both versions of the problem are passed.
Kazimir Kazimirovich is a Martian gardener. He has a huge orchard of binary balanced apple trees.
Recently Casimir decided to get himself three capybaras. The gardener even came up with their names and wrote them down on a piece of paper. 
The name of each capybara is a non-empty line consisting of letters "a" and "b".
Denote the names of the capybaras by the lines a, b, and c. Then Casimir wrote the nonempty lines a, b, and c in a row without spaces. 
For example, if the capybara's name was "aba", "ab", and "bb", then the string the gardener wrote down would look like "abaabbb".
The gardener remembered an interesting property: either the string b is lexicographically not smaller than the strings a and c at the same time, 
or the string b is lexicographically not greater than the strings a and c at the same time. In other words, either a≤b and c≤b are satisfied, 
or b≤a and b≤c are satisfied (or possibly both conditions simultaneously). Here ≤ denotes the lexicographic "less than or equal to" for strings. 
Thus, a≤b means that the strings must either be equal, or the string a must stand earlier in the dictionary than the string b.
For a more detailed explanation of this operation, see "Notes" section.
Today the gardener looked at his notes and realized that he cannot recover the names because they are written without spaces.
He is no longer sure if he can recover the original strings a, b, and c, so he wants to find any triplet of names that satisfy the above property.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.
The only line of a test case contains the string s (3≤|s|≤100) — the names of the capybaras, written together. The string consists of English letters 'a' and 'b' only.
It is guaranteed that the sum of string lengths over all test cases does not exceed 500.

Output
For each test case, print three strings a, b and c on a single line, separated by spaces — names of capybaras, such that writing them without spaces results in a lines.
Either a≤b and c≤b, or b≤a and b≤c must be satisfied.
If there are several ways to restore the names, print any of them. If the names cannot be recovered, print ":(" (without quotes).

*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    string s;
    string a, b, c;
    while (T--) {
        cin >> s;
        a = ""; b = ""; c = "";
        int n = s.length();
        if (s[0] == s[n-1]) {
            a = s[0];
            c = s[n-1];
            for (int i = 1; i < n - 1; i++) {
                b += s[i];
            }
        }
        else {
            if (s[0] == s[1]) {
                a = s[0];
                b = s[1];
                for (int i = 2; i < n; i++) {
                    c += s[i];
                }
            }
            else {
                if (s[0] == 'a') {
                    a = s[0];
                    c = s[n - 1];
                    for (int i = 1; i < n - 1; i++) {
                        b += s[i];
                    }
                }
                else {
                    a = s[0];
                    b = s[1];
                    for (int i = 2; i < n; i++) {
                        c += s[i];
                    }
                }
            }
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}

