/*
Problem statement:
You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy.
You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible.
You can open each bag and mix all pieces of candy before distributing them to the kids.

How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    int x=1;
    while(T--){
        int bags,kids,tmp,sum=0;
        cin>>bags>>kids;
        for(int i=0;i<bags;i++){
            cin>>tmp;
            sum+=tmp;
        }
        cout<<"Case #"<<x++<<": "<<sum%kids<<endl;
    }
    return 0;
}
