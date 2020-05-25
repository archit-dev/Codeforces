#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ans1=true,ans2=true;
    vector <char> v1,v2;
    for(int i=0;i<n;i++){
        v1.push_back(s[i]);
    }
    for(int i=n;i<2*n;i++){
        v2.push_back(s[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v1[i]<=v2[i]){
            ans1=false;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(v1[i]>=v2[i]){
            ans2=false;
            break;
        }
    }
    if((ans1^ans2)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
