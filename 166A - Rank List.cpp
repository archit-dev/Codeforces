#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector <pair<int,int> > v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(v[j].first<v[j+1].first){
                swap(v[j],v[j+1]);
            }
            else if(v[j].first==v[j+1].first){
                if(v[j].second>v[j+1].second){
                    swap(v[j],v[j+1]);
                }
            }
        }
    }
    int count=0,win = v[k-1].first,wintime=v[k-1].second;
    for(int i=0;i<n;i++){
        if(v[i].first==win && v[i].second==wintime){
            count+=1;
        }
    }
    cout<<count<<"\n";
    return 0;
}
