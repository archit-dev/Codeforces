#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector < pair<int,int> > restaurant;
    for(int i=0,x,y;i<n;i++){
        cin>>x>>y;
        restaurant.push_back(make_pair(x,y));
    }
    vector<int> joy;
    for(int i=0;i<n;i++){
        joy.push_back(restaurant[i].first-max(0,restaurant[i].second-k));
    }
    int maxJoy=INT_MIN;
    for(int i=0;i<n;i++){
        maxJoy=max(maxJoy,joy[i]);
    }
    cout<<maxJoy<<"\n";
    return 0;
}
