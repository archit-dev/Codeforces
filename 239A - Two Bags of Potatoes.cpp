#include <bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    int rem=k-(y%k);
    vector<int> v;
    for(int i=rem;i<=(n-y);i+=k){
        if(i==0){
            continue;
        }
        else{
            v.push_back(i);
        }
    }
    if(v.size()==0){
        cout<<"-1\n";
    }
    else{
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
