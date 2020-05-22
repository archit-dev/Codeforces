#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> v;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    int sameIndex=n-1;
    int same=v[n-1];
    for(int i=n-1;i>=0;i--){
        if(v[i]==same){
            sameIndex=i;
        }
        else{
            break;
        }
    }
    if(sameIndex<=k-1){
        cout<<sameIndex;
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}
