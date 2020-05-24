#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    int counter=1,a=1;
    for(int i=n-1;i>=0;i--){
        if(counter%2!=0){
            for(int j=n-1;j>=0;j--){
                matrix[i][j]=a++;
            }
            counter+=1;
        }
        else{
            for(int j=0;j<n;j++){
                matrix[i][j]=a++;
            }
            counter+=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
