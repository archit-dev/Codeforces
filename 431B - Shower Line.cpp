#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            matrix[i][j]=x;
        }
    }
    int arr[5]={0,1,2,3,4};
    int perm =INT_MIN;
    do{
        int count=0;
        count+=matrix[arr[0]][arr[1]]+matrix[arr[1]][arr[0]];
        count+=matrix[arr[2]][arr[3]]+matrix[arr[3]][arr[2]];
        
        count+=matrix[arr[1]][arr[2]]+matrix[arr[2]][arr[1]];
        count+=matrix[arr[3]][arr[4]]+matrix[arr[4]][arr[3]];
        
        count+=matrix[arr[2]][arr[3]]+matrix[arr[3]][arr[2]];
        
        count+=matrix[arr[3]][arr[4]]+matrix[arr[4]][arr[3]];
        perm =max(count,perm );
    }while(next_permutation(arr,arr+5));
    
    cout<<perm <<"\n";
    return 0;
}
