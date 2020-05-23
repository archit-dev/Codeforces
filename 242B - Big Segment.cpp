#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair< int, int> > v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int minFirst=INT_MAX,minFirstPos=0,minFirstSec=0;
    for(int i=0;i<v.size();i++){
        if(v[i].first<minFirst){
            minFirst=v[i].first;
            minFirstPos=i;
            minFirstSec=v[i].second;
        }
        else if(v[i].first==minFirst){
            if(minFirstSec<v[i].second){
                minFirstSec=v[i].second;
                minFirstPos=i;
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    bool ans=true;
    for(int i=0;i<n;i++){
        if(v[i].second>minFirstSec){
            ans=false;
        }
    }
    if(ans){
        cout<<minFirstPos+1<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}
