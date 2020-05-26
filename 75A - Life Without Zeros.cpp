#include <bits/stdc++.h>
using namespace std;

long long removeZeros(long long a){
    long long num1=0,num2=0;
    while(a){
        long long rem=a%10;
        if(rem==0){
            a/=10;
            continue;
        }
        else{
            num1=num1*10+rem;
            a/=10;
        }
        
    }
    while(num1){
        long long rem=num1%10;
        num2=num2*10+rem;
        num1/=10;
    }
    return num2;
}

int main(){
    long long a,b,c;
    cin>>a>>b;
    c=a+b;
    if(removeZeros(a)+removeZeros(b)==removeZeros(c)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
