#include <bits/stdc++.h>
using namespace std;

long long func(long long a ,long long b){
    long long x,i;
    bool ans=false;
    for (i=0;i<10;i++){
        x = a*10+i;
        if(x%b==0){
            ans=true;
            break;
        }
    }
    if(!ans){
        return -1;
    }
    else{
        return x;
    }

}

int main(){
    long long a,b,n;
    cin>>a>>b>>n;
    if(func(a,b)==-1){
        cout<<"-1\n";
    }
    else{
        long long x = func(a,b);
        cout<<x;
        for(int i=0;i<n-1;i++){
            cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}
