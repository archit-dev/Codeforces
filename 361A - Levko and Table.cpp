#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n][n];
    int count=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==count){
                arr[i][j]=k;
                count-=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
