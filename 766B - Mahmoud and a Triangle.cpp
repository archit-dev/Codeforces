#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector <long long > v;
    cin>>n;
    for(int i= 0 ; i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int startptr=0,next=1;
    bool ans=false;
    for(startptr=0;startptr<n-2;startptr++){
        if(v[startptr]+v[next]>v[next+1]){
            ans=true;
            break;
        }
        next+=1;
    }
    if(ans){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
