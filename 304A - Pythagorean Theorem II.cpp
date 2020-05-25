#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int c=sqrt(i*i+j*j);
            if(c<=n && c*c==(i*i+j*j)){
                count+=1;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
