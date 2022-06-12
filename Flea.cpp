/*It is known that fleas in Berland can jump only vertically and horizontally, and the length of the jump is always equal to s centimeters. 
A flea has found herself at the center of some cell of the checked board of the size n × m centimeters (each cell is 1 × 1 centimeters).
She can jump as she wishes for an arbitrary number of times, she can even visit a cell more than once. The only restriction is that she cannot jump out of the board.

The flea can count the amount of cells that she can reach from the starting position (x, y). Let's denote this amount by dx, y.
Your task is to find the number of such starting positions (x, y), which have the maximum possible value of dx, y.*/

#include <iostream>
using namespace std;
typedef long long ll;
 
int main(){
    ll n,m,s;
    cin>>n>>m>>s;
        ll x = n % s;
        ll y = m % s;
        ll z = n / s;
        ll t = m / s;
        if(x == 0) x = s;
        else z++;
        if(y == 0) y = s;
        else t++;
        ll ans = x * y * z * t;
        cout<<ans;
    return 0;
}
