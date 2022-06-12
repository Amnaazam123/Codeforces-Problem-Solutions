/*In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. The first column has number A, the second — number B, etc. till column 26 that is marked by Z. 
Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.
The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. For example, BC23 is the name for the cell that is in column 55, row 23.
Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. For instance, R23C55 is the cell from the previous example.
Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to the rules of another numeration system.*/

#include<iostream>
#include<vector>
#include<string>
using  namespace  std;
string ss;
void num_to_str(int num)
{
    if (num)
    {
        num_to_str((num - 1) / 26);
        ss += ('A' + (num - 1) % 26);
    }
}
int ans = 0;
void str_to_num(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans * 26 + s[i] - 'A' + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ss = "";
        ans = 0;
        string s;
        cin >> s;
        vector<string>v;
        vector<string>v2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                string s1;
                while (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s1 += s[i];
                    i++;
                }
                v.push_back(s1);
            }
            else
            {
                string s1;
                while (s[i] >= '0' && s[i] <= '9')
                {
                    s1 += s[i];
                    i++;
                }
                v2.push_back(s1);
            }
            i--;
        }
        if (v.size() > 1 && v2.size() > 1)
        {
            string ans1, ans2;
            ans1 = v2[0];
            ans2 = v2[1];
            //cout<<ans1<<" "<<ans2<<endl;
            int x = stoi(ans2);
            //cout<<x<<endl;
            num_to_str(x);
            cout << ss << ans1 << endl;
        }
        else
        {
            string ans1, ans2;
            ans1 = v[0];
            ans2 = v2[0];
            str_to_num(ans1);
            cout << 'R' << ans2 << 'C' << ans << endl;
        }
    }
}
