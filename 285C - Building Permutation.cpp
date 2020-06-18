#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector <ll> v;
    for(ll i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll l=n,count=0;
    for(int i=0;i<n;i++){
        count+= abs(l - v[n-i-1]);
        l-=1;
    }
    cout<<count<<endl;
    return 0;
}
