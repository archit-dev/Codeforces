#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                sum+=arr[j];
            }
        }
        if(sum%2==0){
            ans+=1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
