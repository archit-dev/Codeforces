#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[1001]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]+=1;
    }
    bool ans=true;
    for(int i=0;i<1001;i++){
        if(arr[i]>(n+1)/2){
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
