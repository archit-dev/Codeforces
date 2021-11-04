#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = INT_MIN;
    while(n--){
        int x,y;
        cin>>x>>y;
        ans = max(x+y,ans);
    }
    cout<<ans<<"\n";
    return 0;
}
