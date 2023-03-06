#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countFour(int number) {
    int count1 = 0;
    for (int i = 0; i <= number; i++) {
        string s = to_string(i);
        int cnt = count(s.begin(), s.end(), '4');
        if (cnt > 0) {
            cout << "str containing 4: " << s << "\n";
            count1 += 1;
        }
    }
    cout << "Total numbers which coontain 4: " << count1 << "\n";
    return number - count1;
}

int main() {
    int number;
    cout << "Enter the distance on the meter: ";
    cin >> number;
    int actual = countFour(number);
    cout << "The actual distance covered is: " << actual << endl;
    return 0;
}
