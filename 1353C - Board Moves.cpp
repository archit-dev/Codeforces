#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long q = (n-1)/2;
        long long ans = 0 , i = 8,j=1;
        while(j!=q+1){
            ans+=j*i;
            j+=1;
            i+=8;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
