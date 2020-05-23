#include <bits/stdc++.h>
using namespace std;

bool prime(int x){
    if(x==0||x==1){
        return false;
    }
    else if(x%2==0&&x!=2){
        return false;
    }
    else{
        for(int i=3;i<=sqrt(x);i+=2){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;count<n;i++){
        if(prime(i)){
            cout<<i<<" ";
            count+=1;
        }
    }
    cout<<"\n";
    return 0;
}
