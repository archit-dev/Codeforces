#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hundred=0,twoHundred=0;
    while(n--){
        int x;
        cin>>x;
        (x==100? hundred: twoHundred)+=1;
    }
    if(hundred%2!=0){
        cout<<"NO\n";
    }
    else if(hundred==0 && twoHundred%2!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    
    return 0;
}
