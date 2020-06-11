#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <pair<int,int> > v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    bool ans=false;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i].first<v[i+1].first){
            if(v[i].second>v[i+1].second){
                ans=true;
            }
        }
    }
    if(ans){
        cout<<"Happy Alex\n";
    }
    else{
        cout<<"Poor Alex\n";
    }
    return 0;
}
