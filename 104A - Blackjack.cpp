#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int req=n-10;
    if(req>11||req<=0){
        cout<<"0\n";
    }
    else{
        if(req==10){
            cout<<"15\n";
        }
        else{
            cout<<"4\n";
        }
    }
    return 0; 
}
