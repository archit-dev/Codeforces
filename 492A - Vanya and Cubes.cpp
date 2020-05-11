#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    int totalsum=0;
    while(totalsum<n){
        i+=1;
        int sum=(i*(i+1))/2;
        totalsum+=sum;
        if(totalsum>n){
            i-=1;
        }
    }
    cout<<i<<"\n";
    return 0;
}
