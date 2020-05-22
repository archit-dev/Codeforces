#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int arr1[256]={0};
    int arr2[256]={0};
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=' ')
            arr1[s1[i]]+=1;
    }
    bool ans=true;
    for(int i=0;i<s2.size();i++){
        if(s2[i]!=' ')
            arr2[s2[i]]+=1;
    }
    for(int i=0;i<256;i++){
        if(arr1[i]<arr2[i]){
            ans=false;
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
