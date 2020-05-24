#include <bits/stdc++.h>
using namespace std;
int main(){
    int numOfSeals,chips,i=1;
    cin>>numOfSeals>>chips;
    while(i<=chips){
        chips-=i;
        if(i==numOfSeals){
            i=1;
        }
        else{
            i+=1;
        }
    }
    cout<<chips<<"\n";
    return 0;
}
