/*
problem statement:
You are given an array a consisting of n (n≥3) positive integers.
It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4] all numbers except one are equal to 4).
Print the index of the element that does not equal others. The numbers in the array are numbered from one.

*/


#include<iostream>
using namespace std;
int main()
{
    int t;
    int* arr;
    cin >> t;
    int size;
    for (int T = 0; T < t; T++)
    {
        cin >> size;
        arr = new int[size];
        for (int j = 0; j < size; j++)
            cin >> arr[j];
        if (size == 1)
        {
            cout << "1\n";
        }
        else if (size == 2)
        {
            cout << "1\n";
        }
 
        else if (arr[1] == arr[2] && arr[0] != arr[1])
        {
            cout << "1\n";
        }
         else if (arr[0] == arr[2] && arr[0] != arr[1])
        {
            cout << "2\n";
        }
        else if(arr[0] == arr[1] && arr[0] != arr[2])
        {
            cout << "3\n";
        }
        else
        {
            for (int i = 3; i < size; i++)
            {
                if (arr[i] != arr[i - 1])
                {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
          
        delete[] arr;
    }
    return 0;
}
