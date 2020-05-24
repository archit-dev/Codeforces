#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ans=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
