#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    bool one=false;
    int zeroPos=-1;
    for(int i=0;i<s1.size();i++){
        if(one){
            if(s1[i]=='0'){
                zeroPos=i;
                break;
            }
        }
        if(s1[i]=='1'){
            one=true;
        }
    }
    if(!one){
        for(int i=0;i<s1.size()-1;i++){
            cout<<s1[i];
        }
        cout<<"\n";
    }
    else{
        if(zeroPos!=-1){
            for(int i=0;i<s1.size();i++){
                if(i==zeroPos){
                    continue;
                }
                else{
                    cout<<s1[i];
                }
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<s1.size()-1;i++){
                cout<<s1[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
