/*
Problem Statement:
You are given a palindromic string s of length n.
You have to count the number of indices i (1≤i≤n) such that the string after removing si from s still remains a palindrome.
For example, consider s = "aba"

If we remove s1 from s, the string becomes "ba" which is not a palindrome.
If we remove s2 from s, the string becomes "aa" which is a palindrome.
If we remove s3 from s, the string becomes "ab" which is not a palindrome.
A palindrome is a string that reads the same backward as forward. For example, "abba", "a", "fef" are palindromes whereas "codeforces", "acd", "xy" are not.

Input
The input consists of multiple test cases. The first line of the input contains a single integer t (1≤t≤103)  — the number of test cases. Description of the test cases follows.
The first line of each testcase contains a single integer n (2≤n≤105)  — the length of string s.
The second line of each test case contains a string s consisting of lowercase English letters. It is guaranteed that s is a palindrome.
It is guaranteed that sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, output a single integer  — the number of indices i (1≤i≤n) such that the string after removing si from s still remains a palindrome.

You can find this problem here : https://codeforces.com/contest/1682/problem/A
*/


#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s;
        int n;
        cin >> n >> s;
        int middle = n / 2;
        int inc = middle, dec = middle;
        char countCharacter = s[middle];
        int count = 0;
        while (s[inc] == countCharacter) {
            inc++;
            if (inc >= n)
                break;
        }
        while (s[dec] == countCharacter && dec > -1) {
            dec--;
            if (dec < 0) {
                break;
            }
        }
        cout << inc - dec - 1 << "\n";
        
    }
    return 0;
}

