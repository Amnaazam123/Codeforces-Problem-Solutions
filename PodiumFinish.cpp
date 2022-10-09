/*
Problem Statement:
Chef got his dream seat in F1 and secured a 3rd place in his debut race. He now wants to know the time gap between him and the winner of the race.
You are his chief engineer and you only know the time gap between Chef and the runner up of the race, given as AA seconds, 
and the time gap between the runner up and the winner of the race, given as BB seconds.
Please calculate and inform Chef about the time gap between him and the winner of the race.
*/
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int A,B;
        cin>>A>>B;
        cout<<A+B<<endl;
    }
	return 0;
}
