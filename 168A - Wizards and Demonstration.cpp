#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,y,req,min;
    cin>>n>>x>>y;
    min=ceil((y*n)/(float)100);
    req=min-x;
    if(req<=0){
        cout<<"0\n";
    }
    else{
        cout<<req<<"\n";
    }
    return 0;
}
